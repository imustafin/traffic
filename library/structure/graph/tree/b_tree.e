indexing
	description: "B-Trees: implementation of balanced search trees."
	author: "Olivier Jeger"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class
	B_TREE [G -> COMPARABLE]

inherit
	BALANCED_SEARCH_TREE [G]
		rename
			is_valid_balanced_search_tree as is_valid_b_tree
		export {B_TREE} -- Inapplicable
			copy,
			forget_left,
			forget_right
		redefine
			binary_representation,
			child_after,
			child_before,
			child_capacity,
			child_item,
			child_off,
			clone_node,
			copy,
			count,
			fill,
			fill_list,
			is_empty,
			is_equal,
			linear_representation,
			parent,
			readable_child
		end

create
	make

feature {NONE} -- Initialization

	make (n: INTEGER) is
			-- Create an empty B tree of order `n',
			-- i.e. maximum `n' children and `n'-1 items per node.
		require
			valid_n: n >= 3
		do
			-- Allocate 1 more element for overflow in `put' operations.
			create item_list.make (n)
			create children_list.make (n+1)
			-- Enable `object_comparison'.
			object_comparison := True
			item_list.compare_objects
		ensure
			valid_tree: is_valid_b_tree
			object_comparison: object_comparison
		end

feature -- Access

	parent: like Current
			-- Parent of current node

	child: like parent is
			-- Current child node
		do
			Result := children_list.item
		end

	item: G is
			-- Current item
			-- Result is Void when `off'.
		do
			if off then
				Result := Void
			else
				Result := item_list.item
			end
		ensure then
			off_definition: off = (Result = Void)
		end

	item_cursor: CURSOR is
			-- Current item cursor position
		do
			Result := item_list.cursor
		end

	item_index: INTEGER is
			-- Index of current item
		require
			not_off: not off
		do
			Result := item_list.index
		end

	child_item: like item is
			-- Current item in current child node
		do
			Result := child.item
		end

	child_cursor: CURSOR is
			-- Current child cursor position
		do
			Result := children_list.cursor
		end

	child_index: INTEGER is
			-- Index of current child
		do
			Result := children_list.index
		end

	first_child: like parent is
			-- Leftmost child
		do
			Result := children_list.first
		end

	last_child: like parent is
			-- Rightmost child
		do
			Result := children_list.last
		end

	left_sibling: like parent is
			-- Left neighbor (if any)
		local
			index: INTEGER
		do
			index := parent.children_list.index_of (Current, 1)
			if index > 1 then
				Result := parent.children_list.i_th (index-1)
			else
				Result := Void
			end
		end

	right_sibling: like parent is
			-- Right neighbor (if any)
		local
			index: INTEGER
		do
			index := parent.children_list.index_of (Current, 1)
			if index < parent.arity then
				Result := parent.children_list.i_th (index+1)
			else
				Result := Void
			end
		end

feature -- Measurement

	min: like item is
			-- Minimum item stored in tree
		local
			n: like Current
		do
			if is_empty then
				Result := Void
			else
				from
					n := Current
				until
					n.is_leaf
				loop
					n := n.first_child
				end
				Result := n.item_list.first
			end
		end

	max: like item is
			-- Maximum item stored in tree
		local
			n: like Current
		do
			if is_empty then
				Result := Void
			else
				from
					n := Current
				until
					n.is_leaf
				loop
					n := n.last_child
				end
				Result := n.item_list.last
			end
		end

	order: INTEGER is
			-- Order of the B-tree (maximum number of children)
		do
			Result := child_capacity
		end

	arity: INTEGER is
			-- Number of children
		do
			Result := children_list.count
		end

	child_capacity: INTEGER is
			-- Maximal number of children
		do
			-- 1 item is reserved for overflow at `put' operations.
			Result := children_list.capacity - 1
		end

	item_count: INTEGER is
			-- Number of items in current node
		do
			Result := item_list.count
		end

	item_capacity: INTEGER is
			-- Maximal number of items
		do
			-- 1 item is reserved for overflow at `put' operations.
			Result := item_list.capacity - 1
		end

	count: INTEGER is
			-- Total number of items in tree
		local
			pos: CURSOR
		do
			-- Count items in current node.
			Result := item_count
			-- Add item count of all subtrees.
			from
				pos := child_cursor
				child_start
			until
				child_after
			loop
				Result := Result + child.count
				child_forth
			end
			child_go_to (pos)
		end

	height: INTEGER is
			-- Tree height
		do
			if is_leaf then
				Result := 0
			else
				Result := first_child.height + 1
			end
		end

feature -- Comparison

	is_equal (other: like Current): BOOLEAN is
			-- Does `other' contain the same elements and
			-- has `other' the same structure as Current?
 			-- (Object equality)
		local
			cc1, cc2: CURSOR
			ic1, ic2: CURSOR
		do
			if Current = other then
				Result := True
			else
				-- Compare generic tree properties.
				Result := (item_count = other.item_count) and
						  (object_comparison = other.object_comparison) and
						  (arity = other.arity) and
						  (child_capacity = other.child_capacity)

				-- Compare items.
				ic1 := item_cursor
				ic2 := other.item_cursor
				from
					item_start
					other.item_start
				until
					not Result or item_after
				loop
					Result := item.is_equal (other.item)
					item_forth
					other.item_forth
				end
				item_go_to (ic1)
				other.item_go_to (ic2)

				-- Compare children
				cc1 := child_cursor
				cc2 := other.child_cursor
				from
					child_start
					other.child_start
				until
					not Result or child_after
				loop
					Result := child.is_equal (other.child)
					child_forth
					other.child_forth
				end
				child_go_to (cc1)
				other.child_go_to (cc2)
			end
		end

feature -- Status report

	is_sorted: BOOLEAN is
			-- Is tree sorted?
		local
			largest_until_now: CELL [G]
		do
			if is_empty then
				Result := True
			else
				-- Select minimum tree item as start value.
				create largest_until_now.put (min)
				Result := is_sorted_node (largest_until_now)
			end
		end

	has_unique_items: BOOLEAN is
			-- Are all item values unique?
		local
			item_set: ARRAYED_SET [like item]
		do
			create item_set.make (0)
			item_set.compare_objects
			Result := node_has_unique_items (item_set)
		end

	item_before: BOOLEAN is
			-- Is there no valid item position to the left of cursor?
		do
			Result := item_list.before
		end

	item_after: BOOLEAN is
			-- Is there no valid item position to the right of cursor?
		do
			Result := item_list.index > item_count
		end

	readable_child: BOOLEAN is
			-- Is there a current child to be read?
		do
			Result := not children_list.off
		end

	child_off: BOOLEAN is
			-- Is there no current child?
		do
			Result := children_list.off
		end

	child_before: BOOLEAN is
			-- Is there no valid child position to the left of cursor?
		do
			Result := children_list.before
		end

	child_after: BOOLEAN is
			-- Is there no valid child position to the right of cursor?
		do
			Result := children_list.index > arity
		end

	is_empty: BOOLEAN is
			-- Is structure empty of items?
		do
			Result := is_root and item_list.is_empty
		end

	has (v: like item): BOOLEAN is
			-- Does subtree include `v'?
			-- (object equality)
		local
			pos: INTEGER
			subtree: like Current
		do
			matching_node := Current
			if (v = Void) or is_empty then
				Result := False
			else
				-- Perform binary search over items to find match in current node.
				pos := binary_search (v)
				Result := (pos <= item_count) and then v.is_equal (item_list.i_th (pos))

				if (not Result) and (not is_leaf) then
					-- `v' not found: continue search in child node.
					if pos <= item_count then
						-- Search for `v' in left subtree of item at index `pos'.
						subtree := children_list.i_th (pos)
						Result := subtree.has (v)
					else
						-- Search for `v' in last subtree.
						subtree := children_list.last
						Result := subtree.has (v)
					end
				end
			end

			-- Propagate search result to parent (if possible).
			if not is_root then
				parent.set_matching_node (matching_node)
			end
		end

	off: BOOLEAN is
			-- Is there no current item?
		do
			Result := item_list.off
		end

feature -- Status setting

feature -- Cursor movement

	item_start is
			-- Move cursor to first item.
		do
			item_list.start
		end

	item_forth is
			-- Move cursor to next item.
		do
			item_list.forth
		end

	item_back is
			-- Move cursor to previous item.
		do
			item_list.back
		end

	item_finish is
			-- Move cursor to last item.
		do
			item_list.finish
		end

	item_go_to (p: CURSOR) is
			-- Move item cursor to position `p'.
		do
			item_list.go_to (p)
		end

	item_go_i_th (i: INTEGER) is
			-- Move cursor to `i'-th item.
		do
			item_list.go_i_th (i)
		end

	child_go_to (p: CURSOR) is
			-- Move child cursor to position `p'.
		do
			children_list.go_to (p)
		end

	child_start is
			-- Move cursor to first child.
		do
			children_list.start
		end

	child_finish is
			-- Move cursor to last child.
		do
			children_list.finish
		end

	child_forth is
			-- Move cursor to next child.
		do
			children_list.forth
		end

	child_back is
			-- Move cursor to previous child.
		do
			children_list.back
		end

	child_go_i_th (i: INTEGER) is
			-- Move cursor to `i'-th child.
		do
			if (1 <= i) and (i <= arity) then
				children_list.go_i_th (i)
			end
		end

feature -- Element change

	put, extend (v: G) is
			-- Put `v' at proper position in tree
			-- unless `v' exists already (object equality).
		do
			-- Insert `v' only if not already present in tree.
			if not has (v) then
				-- `matching_node' has been set in `has' query.
				matching_node.put_impl (v, Void)
			end
		end

	fill (other: TREE [G]) is
			-- Fill with as many items of `other' as possible.
			-- The representations of `other' and current node
			-- need not be the same.
		local
			b_tree: like Current
			c: CURSOR
		do
			b_tree ?= other
			if b_tree /= Void then
				-- `other' is a B-tree.
				-- Fill in all items of `other'.
				c := b_tree.item_cursor
				from
					b_tree.item_start
				until
					b_tree.item_after
				loop
					put (b_tree.item)
					b_tree.item_forth
				end
				b_tree.item_go_to (c)

				-- And all children of `other'.
				c := b_tree.child_cursor
				from
					b_tree.child_start
				until
					b_tree.child_after
				loop
					fill (b_tree.child)
					b_tree.child_forth
				end
				b_tree.child_go_to (c)
			else
				-- Ordinary tree with just one item per node.
				put (other.item)
				-- Put child items of `other'.
				c := other.child_cursor
				from
					other.child_start
				until
					other.child_after
				loop
					fill (other.child)
					other.child_forth
				end
				other.child_go_to (c)
			end
		end

feature -- Removal

	prune (v: G) is
			-- Remove `v' from tree (object comparison).
			-- Tree is rebalanced as necessary.
		do
			if has (v) then
				matching_node.prune_impl (v)
			end
		ensure then
			item_removed: not has (v)
		end

----- ??? --- ??? --- ??? --- ??? --- ??? --- ??? --- ??? --- ??? -----
	-- SHOULD THIS OPERATION BE ALLOWED???
	prune_tree (n: like Current) is
			-- Remove all items contained in `n' from tree.
		require else
			sorted_tree: is_sorted
		local
			lin_rep: LINEAR [G]
		do
			-- Pruning a subtree is not directly possible because of
			-- "balanced" criterion. All items of `n' are pruned instead.
			lin_rep := n.linear_representation
			from
				lin_rep.start
			until
				lin_rep.after
			loop
				prune (lin_rep.item)
				lin_rep.forth
			end
		end
----- ??? --- ??? --- ??? --- ??? --- ??? --- ??? --- ??? --- ??? -----

feature -- Resizing

feature -- Transformation

feature -- Conversion

	linear_representation: LINEAR [G] is
			-- Representation as a linear structure
		local
			lin_rep: ARRAYED_LIST [G]
		do
			create lin_rep.make (count)
			fill_list (lin_rep)
			Result := lin_rep
		end

	binary_representation: BINARY_TREE [G] is
			-- Convert to binary tree representation:
		do
			--| TODO |--
		end

feature -- Duplication

feature -- Miscellaneous

	clone_node (n: like Current): like Current is
			-- Clone node `n'.
		do
			--| TODO |--
		end

	copy_node (n: like Current) is
			-- Copy node contents but no tree information into `Current'.
		do
			--| TODO |--
		end


feature -- Basic operations

	sort is
			-- Restore order of all elements and balance tree.
			-- Necessary when item values have changed after insertion in tree.
			-- Note that duplicate item values will be removed (object comparison).
		local
			t: like Current
		do
			if not is_sorted then
				-- Create a new B-tree and fill it with all items of current tree.
				create t.make (order)
				t.fill (Current)
				-- Copy root node of `t' into current root node.
				copy (t)
			end
		end

feature -- Obsolete

feature {NONE} -- Inapplicable

	duplicate (n: INTEGER): like Current is
			-- Copy of sub-tree beginning at cursor position and
			-- having min (`n', `arity' - `child_index' + 1)
			-- children.
		do
		end

feature {B_TREE} -- Implementation

	children_list: FIXED_LIST [like Current]
			-- Children of current node

	item_list: FIXED_LIST [G]
			-- Items stored in current node

	set_matching_node (a_node: like Current) is
			-- Set `matching_node' to `a_tree_node' (both results of `binary_search').
		do
			matching_node := a_node
		ensure
			node_set: matching_node = a_node
		end

	put_impl (v: G; c: like Current) is
			-- Put `v' at proper position into `item_list' of current node.
			-- if `c' is not void, it points to child node immediately greater than `v'.
			-- Tree is rebalanced as necessary.
		require
			v_not_void: v /= Void
		local
			pos: INTEGER
		do
			-- Find insertion position by binary search.
			pos := binary_search (v)
			put_into_fixed (item_list, v, pos)

			-- Put child node at following position (if non-void).
			if c /= Void then
				put_into_fixed (children_list, c, pos+1)
			end

			-- Rebalance tree if necessary.
			if is_overflow then
				split_node
			end
		end

	split_node is
			-- Split current node => right sibling,
			-- put upper half of `item_list' there
			-- and put middle item into `parent'.
		local
			middle_item: G
			m: INTEGER
			sibling, root_copy: like Current
		do
			create sibling.make (order)
			m := (item_count+1) // 2

			-- Put upper half of `item_list' into sibling node.
			from
				item_list.go_i_th (m+1)
			until
				item_list.after
			loop
				sibling.item_list.extend (item)
				item_list.remove
			end

			-- Not leaf: put upper half of `children_list' into sibling node
			if not is_leaf then
				from
					children_list.go_i_th (m+1)
				until
					children_list.after
				loop
					sibling.children_list.extend (child)
					children_list.remove
				end
				sibling.reparent_all_children
			end

			middle_item := item_list.i_th (m)
			item_list.go_i_th (m)
			item_list.remove

			-- Attach sibling node to parent.
			if not is_root then
				-- Put `middle_item' into parent node.
				sibling.attach_to_parent (parent)
				parent.put_impl (middle_item, sibling)
			else
				-- Tree height increases by 1, new root node should be created.
				-- Not possible => old root object is copied into child node `root_copy'.
				create root_copy.make (order)
				-- Copy items and children into new node.
				root_copy.set_item_list (item_list)
				root_copy.set_children_list (children_list)
				root_copy.reparent_all_children

				-- Remove all existing data from current node.
				create item_list.make (item_capacity + 1)
				create children_list.make (child_capacity + 1)

				-- Put new item value of into root node.
				item_list.extend (middle_item)

				-- Make `root_copy' and `sibling' children of current node.
				children_list.extend (root_copy)
				children_list.extend (sibling)
				root_copy.attach_to_parent (Current)
				sibling.attach_to_parent (Current)
			end
		end

	prune_impl (v: like item) is
			-- Prune `v' from current node.
		require
			node_has_item: item_list.has (v)
		local
			index: INTEGER
			predecessor: like item
		do
			if not is_leaf then
				-- Inner node: Replace `v' by symmetric predecessor.
				predecessor := symmetric_predecessor (v)
				index := binary_search (v)
				item_list.put_i_th (predecessor, index)
				-- Remove symmetric predecessor from leaf node.
				-- `matching_node' has been set in `symmetric_predecessor' query.
				matching_node.prune_impl (predecessor)
			else
				-- Leaf node: Remove `v'.
				index := binary_search (v)
				item_list.go_i_th (index)
				item_list.remove

				-- Handle possible underflow in node.
				if (not is_root) and (item_count < item_capacity // 2) then
					handle_underflow
				end
			end
		ensure
			item_removed: not item_list.has (v)
		end

	handle_underflow is
			-- Handle underflow in current node, i.e. `item_count' is
			-- smaller than `order'//2.
		local
			t: like Current
			index: INTEGER
			it: like item
		do
			if is_root then
				-- Root has no more item, just first child.
				-- Overwrite root with values from first child.
				t := first_child

				set_item_list (t.item_list)
				set_children_list (t.children_list)
				reparent_all_children
			elseif (left_sibling /= Void) and then (left_sibling.item_count > order // 2) then
				-- Left sibling has enough items for a LL-rotation.
				index := parent.children_list.index_of (Current, 1) - 1
				it := parent.item_list.i_th (index)
				-- Put predecessor item from `parent' in current item list.
				put_into_fixed (item_list, it, 1)
				it := left_sibling.item_list.last
				-- Replace predecessor by last item of left sibling.
				parent.item_list.put_i_th (it, index)
				if not is_leaf then
					t := left_sibling.last_child
					put_into_fixed (children_list, t, 1)
					t.attach_to_parent (Current)
					left_sibling.children_list.finish
					left_sibling.children_list.remove
				end
				left_sibling.item_list.finish
				left_sibling.item_list.remove
			elseif (right_sibling /= Void) and then (right_sibling.item_count > order // 2) then
				-- Right sibling has enough items for a RR-rotation.
				index := parent.children_list.index_of (Current, 1)
				it := parent.item_list.i_th (index)
				-- Put successor item from `parent' in current item list.
				put_into_fixed (item_list, it, item_count+1)
				it := right_sibling.item_list.first
				-- Replace successor by first item of right sibling.
				parent.item_list.put_i_th (it, index)
				if not is_leaf then
					t := right_sibling.first_child
					put_into_fixed (children_list, t, item_count+1)
					t.attach_to_parent (Current)
					right_sibling.children_list.start
					right_sibling.children_list.remove
				end
				right_sibling.item_list.start
				right_sibling.item_list.remove
			else
				-- Sibling has few enough nodes to be merged with current node.
				if left_sibling /= Void then
					-- Merge current node with left sibling.
					merge_with_left_sibling
				else
					-- Merge right sibling with current node.
					right_sibling.merge_with_left_sibling
				end
			end
		end

	merge_with_left_sibling is
			-- Merge current node with left sibling.
			-- Current node is removed from tree.
		require
			not_root: not is_root
			has_left: left_sibling /= Void
		local
			index: INTEGER
			it: like item
			il: COLLECTION [like item]
			cl: COLLECTION [like Current]
		do
			-- Put predecessor item from `parent' into left sibling.
			index := parent.children_list.index_of (Current, 1) - 1
			it := parent.item_list.i_th (index)
			left_sibling.item_list.extend (it)

			-- Put all items into left sibling.
			il := left_sibling.item_list
			il.fill (item_list)

			-- Put all children into left sibling (if any).
			cl := left_sibling.children_list
			cl.fill (children_list)
			left_sibling.reparent_all_children

			-- Remove predecessor item and link to current node from `parent'.
			parent.item_list.go_i_th (index)
			parent.item_list.remove
			parent.children_list.go_i_th (index + 1)
			parent.children_list.remove

			-- Handle possible underflow in `parent'.
			if parent.item_count < (item_capacity // 2) then
				parent.handle_underflow
			end
		end

	symmetric_predecessor (v: like item): like item is
			-- Next smaller item than `v'
		require
			not_leaf: not is_leaf
		local
			index: INTEGER
			t: like Current
		do
			index := binary_search (v)
			-- Starting from child left of current item,
			-- follow rightmost child link until leaf is reached.
			from
				t := children_list.i_th (index)
			until
				t.is_leaf
			loop
				t := t.last_child
			end
			matching_node := t
			-- Result item is largest leaf item.
			Result := t.item_list.last
		end

	reparent_all_children is
			-- Set `parent' of all children to `Current'.
		local
			c: CURSOR
		do
			-- Backup child cursor.
			c := child_cursor

			-- Reparent all children.
			from
				child_start
			until
				child_after
			loop
				child.attach_to_parent (Current)
				child_forth
			end

			-- Restore child cursor.
			child_go_to (c)
		end

	cut_off_node is
			-- Cut off all links from current node.
		do
			--| TODO |--
		end

	fill_subtree (other: TREE [G]) is
			-- Fill children with children of `other'
		do
			--| TODO |--
		end

	is_overflow: BOOLEAN is
			-- Does the current node need to be split?
		do
			Result := item_list.full
		end

	is_sorted_node (largest_until_now: CELL [G]): BOOLEAN is
			-- Is current node sorted?
		require
			at_least_one_item: item_count >= 1
			largest_until_now_not_void: largest_until_now /= Void
		local
			ic, cc: CURSOR
		do
			if is_leaf then
				ic := item_cursor
				-- Leaf node: items have to be sorted in increasing order.
				from
					Result := True
					item_start
				until
					item_after or not Result
				loop
					Result := item >= largest_until_now.item
					largest_until_now.replace (item)
					item_forth
				end
				item_go_to (ic)
			else
				-- Check if first child is sorted (and get its largest item).
				Result := first_child.is_sorted_node (largest_until_now)
				ic := item_cursor
				cc := child_cursor
				from
					item_start
					child_start
				until
					item_after or not Result
				loop
					-- `item' must be greater/equal than largest until now.
					Result := item >= largest_until_now.item
					largest_until_now.replace (item)
					child_forth
					-- Check that subsequent child is also sorted
					Result := Result and child.is_sorted_node (largest_until_now)
					item_forth
				end
				item_go_to (ic)
				child_go_to (cc)
			end
		end

	fill_list (al: ARRAYED_LIST [G]) is
			-- Fill `al' with items from current node and all children.
			-- `al' is filled in sorted order.
		local
			ic, cc: CURSOR
		do
			if is_leaf then
				ic := item_cursor
				-- Leaf node: put items into `al'.
				from
					item_start
				until
					item_after
				loop
					al.extend (item)
					item_forth
				end
				item_go_to (ic)
			else
				ic := item_cursor
				cc := child_cursor
				-- Inner node: put items and child items alternatively into `al'.
				from
					child_start
					item_start
				until
					item_after
				loop
					child.fill_list (al)
					al.extend (item)
					item_forth
					child_forth
				end
				item_go_to (ic)
				child_go_to (cc)

				-- Put items of last child into `al'.
				child.fill_list (al)
			end
		end

	node_has_unique_items (item_set: SET [like item]): BOOLEAN is
			-- Does current have different items than `item_set'?
		require
			item_set_not_void: item_set /= Void
		local
			c: CURSOR
		do
			Result := True
			-- Check if items have already occured before.
			c := item_cursor
			from
				item_start
			until
				item_after or not Result
			loop
				Result := not item_set.has (item)
				item_set.put (item)
				item_forth
			end
			item_go_to (c)

			-- Check child nodes for item uniqueness.
			c := child_cursor
			from
				child_start
			until
				child_after or not Result
			loop
				Result := child.node_has_unique_items (item_set)
				child_forth
			end
			child_go_to (c)
		end

	set_item_list (l: like item_list) is
			-- Set `item_list' to `l'.
		require
			l_not_void: l /= Void
			same_capacity: l.capacity = item_list.capacity
		do
			item_list := l
		ensure
			item_list_set: item_list = l
		end

	set_children_list (l: like children_list) is
			-- Set `children_list' to `l'.
		require
			l_not_void: l /= Void
			same_capacity: l.capacity = children_list.capacity
		do
			children_list := l
		ensure
			children_list_set: children_list = l
		end

	copy (other: like Current) is
			-- Copy contents from `other'.
			-- Only allowed if `object_comparison' of `other'
			-- conforms to `object_comparison' of current.
		local
			il: COLLECTION [like item]
			cl: COLLECTION [like Current]
		do
			-- Make sure that `object_comparison' of `other' conforms to current.
			if (not object_comparison) or else (other.object_comparison) then
				create item_list.make (item_capacity + 1)
				create children_list.make (child_capacity + 1)
				if object_comparison then
					item_list.compare_objects
				end
				-- Copy items from `other' (`COLLECTION' type is necessary!).
				il := item_list
				il.fill (other.item_list)

				-- Copy children of `other' (`COLLECTION' type is necessary!).
				cl := children_list
				cl.fill (other.children_list)
				reparent_all_children
			end
		end

feature {NONE} -- Implementation

	matching_node: like Current
			-- Tree node where the last `has' query has ended


	valid_index (a_index: INTEGER): BOOLEAN is
			-- Is `a_index' a valid index of `item_list'?
		do
			Result := (a_index >= 1) and (a_index <= item_count)
		end

	put_into_fixed (a_list: FIXED_LIST [ANY]; a_item: ANY; a_pos: INTEGER) is
			-- Put `a_item' into `a_list' at position `a_pos'.
			-- Other items are shift one position to the right if necessary.
		require
			list_not_void: a_list /= Void
			not_full: a_list.count < a_list.capacity
		local
			i: INTEGER
		do
			if a_pos > a_list.count then
				-- Put new element at end of list.
				a_list.extend (a_item)
			else
				-- Shift other elements one position to the right.
				a_list.extend (a_list.last)
				from
					i := a_list.count - 1
				until
					i < a_pos+1
				loop
					a_list.put_i_th (a_list.i_th (i-1), i)
					i := i - 1
				end
				-- Put new element at proper position.
				a_list.put_i_th (a_item, a_pos)
			end
		ensure
			item_at_end: a_pos > old a_list.count implies a_item = a_list.last
			item_in_between: a_pos <= old a_list.count implies a_item = a_list.i_th (a_pos)
		end

	binary_search (v: G): INTEGER is
			-- Search in for `v' in `item_list'.
			-- Result is: index of `v' (if found),
			--            target position for insertion (otherwise).
		require
			v_not_void: v /= Void
		local
			l, r, m: INTEGER
		do
			if item_list.is_empty or else (v > item_list.last) then
				Result := item_count + 1
			else
				from
					l := 1
					r := item_count
				invariant
					not_greater_than_right_bound_item: (v <= item_list.i_th (r))
				variant
					r-l + 1
				until
					l > r-1
				loop
					m := (l+r) // 2
					if item_list.i_th (m) < v then
						l := m+1
					else
						r := m
					end
				end
				Result := l
			end
		ensure
			item_index: (Result <= item_count) implies (v <= item_list.i_th (Result))
			result_range: (1 <= Result) and (Result <= item_count + 1)
		end

invariant

	minimal_child_capacity: child_capacity >= 3
	item_children_capacity_relation: child_capacity = item_capacity + 1

	inner_nodes_at_least_half_full: not (is_root or is_leaf) implies arity >= (child_capacity / 2)

end -- class B_TREE

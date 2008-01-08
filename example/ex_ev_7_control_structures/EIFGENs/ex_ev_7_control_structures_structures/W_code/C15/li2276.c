/*
 * Code for class LINEAR_SUBSET [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void Fedx_f4(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fedyndr(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fm4bxf9(EIF_REFERENCE, int);
extern void EIF_Minit2276(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* move_item */

void Fedx_f4 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,ur1);
	RTLR(2,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTEAA("move_item", RTUD(2275), Current, 2, 1, 27300);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("item_exists", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("item_in_set", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWPF(39, 0, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(119, 0, dtype))(Current)).value.EIF_INTEGER_32_value);

	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 3, dtype))(Current);
	RTHOOK(5);
	tc1 = '\01';
	if (!loc2) {
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	while (!(tc1)) {

		RTHOOK(6);
		tc2 = *(EIF_BOOLEAN *)(Current + RTWPA(39, 3, dtype));
		if (tc2) {
			RTHOOK(7);
			ur1 = RTLN(RTUD(737));
			*(EIF_INTEGER_32 *)ur1 = arg1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
			ur2 = RTLN(RTUD(737));
			*(EIF_INTEGER_32 *)ur2 = ti4_1;
			loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWPF(1, 6, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		} else {
			RTHOOK(8);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
			loc2 = (EIF_BOOLEAN)(EIF_BOOLEAN)(arg1 == ti4_1);
		}


		RTHOOK(9);
		if ((EIF_BOOLEAN) !loc2) {
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 4, dtype))(Current);
		}

		RTHOOK(5);
		tc1 = '\01';
		if (!loc2) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		;
	}

	if (RTAL & CK_CHECK) {
		RTHOOK(11);
		RTCT("found", EX_CHECK);
		tc2 = '\0';
		if (loc2) {
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(139, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc2 = (EIF_BOOLEAN) !tc3;
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWPF(139, 5, dtype))(Current);
	RTHOOK(13);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(119, 4, dtype))(Current, ui4_1x);
	RTHOOK(14);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWPF(119, 5, dtype))(Current, ui4_1x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* subset_strategy_selection */

EIF_UNION Fedyndr (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(5);
	RTLR(2,tr1);
	RTLR(0,arg2);
	RTLR(3,Current);
	RTLR(1,loc1);
	RTLR(4,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("subset_strategy_selection", RTUD(2275), Current, 1, 2, 27301);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("item_exists", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLN(RTUD(737));
	*(EIF_INTEGER_32 *)tr1 = arg1;
	loc1 = RTRV(RTUD(725), tr1);

	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		{
			static int16 typarr [] = {2275,2279,737,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 2279, typarr);

			tr1 = RTLN(typres);

		}
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	} else {
		RTHOOK(6);
		{
			static int16 typarr [] = {2275,2280,737,-1};
			int16 typres;
			static int16 typcache = -1;

			typres = RTCID2(&typcache, dftype, 2280, typarr);

			tr1 = RTLN(typres);

		}
		RTCI2(tr1);
		Result = (EIF_REFERENCE)RTCCL(tr1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("strategy_set", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg2
#undef arg1
}

void Fm4bxf9 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTIT("before_definition", Current);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(119, 1, dtype))(Current)).value.EIF_BOOLEAN_value);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWPF(119, 0, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(tc1 == (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2276 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif


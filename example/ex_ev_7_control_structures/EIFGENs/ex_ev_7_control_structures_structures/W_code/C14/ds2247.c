/*
 * Code for class DS_ARRAYED_SPARSE_TABLE [REFERENCE, INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fo7lmdf(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo7nj6a(EIF_REFERENCE, EIF_UNION);
extern void Fo7p4xs(EIF_REFERENCE, EIF_UNION);
extern void Fo7t0ji(EIF_REFERENCE, EIF_UNION);
extern void Fo7wl9_(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo7xw48(EIF_REFERENCE, EIF_UNION);
extern void Fo7zuy3(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo7kzft(EIF_REFERENCE);
extern void Fo7l9a1(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fo7mw8o(EIF_REFERENCE, EIF_UNION);
extern void Fo7ou1j(EIF_REFERENCE, EIF_UNION);
extern void Fo7phz5(EIF_REFERENCE);
extern void Fo7qsve(EIF_REFERENCE);
extern void Fo7sqn9(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo7tdlw(EIF_REFERENCE);
extern void Fo7uog4(EIF_REFERENCE);
extern void Fo7vzcd(EIF_REFERENCE, EIF_UNION);
extern void Fo7w87m(EIF_REFERENCE);
extern void Fo7yj2v(EIF_REFERENCE);
extern EIF_UNION Fo7_hwq(EIF_REFERENCE, EIF_UNION);
extern void Fo7_4uc(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo70srz(EIF_REFERENCE);
extern void Fo71fpl(EIF_REFERENCE, EIF_UNION);
extern void Fo712m7(EIF_REFERENCE);
extern void Fo7r2qn(EIF_REFERENCE, EIF_UNION);
extern void Fp1sppe(EIF_REFERENCE, int);
extern void EIF_Minit2247(void);

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

/* item_storage_item */

EIF_UNION Fo7lmdf (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,Result);

	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("item_storage_item", RTUD(2246), Current, 0, 1, 30279);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 164, dtype));
	ui4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	Result = (EIF_REFERENCE)RTCCL(tr2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
#undef arg1
}

/* clashes_item */

EIF_UNION Fo7nj6a (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("clashes_item", RTUD(2246), Current, 0, 1, 30282);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 175, dtype));
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* item_storage_resize */

void Fo7p4xs (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("item_storage_resize", RTUD(2246), Current, 0, 1, 30259);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
		RTTE((EIF_BOOLEAN)(arg1 > ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 188, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2246, 164, dtype));
	ur1 = tr2;
	ui4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2193, 35, "resize", tr1))(tr1, ur1x, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 164, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* key_storage_resize */

void Fo7t0ji (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("key_storage_resize", RTUD(2246), Current, 0, 1, 30265);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
		RTTE((EIF_BOOLEAN)(arg1 > ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 189, dtype));
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2246, 169, dtype));
	ur1 = tr2;
	ui4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2264, 35, "resize", tr1))(tr1, ur1x, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 169, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* clashes_put */

void Fo7wl9_ (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("clashes_put", RTUD(2246), Current, 0, 2, 30268);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
		RTTE((EIF_BOOLEAN)(arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 175, dtype));
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		ui4_1 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2246, 163, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* clashes_resize */

void Fo7xw48 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("clashes_resize", RTUD(2246), Current, 0, 1, 30270);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
		RTTE((EIF_BOOLEAN)(arg1 > ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2246, 85, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2246, 175, dtype));
	ur1 = tr2;
	ui4_1 = arg1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2264, 35, "resize", tr1))(tr1, ur1x, ui4_1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 175, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* make_slots */

void Fo7zuy3 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_slots", RTUD(2246), Current, 0, 1, 30272);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2246, 85, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ui4_1 = arg1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2264, 31, "make", tr1))(tr1, ui4_1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 181, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* new_cursor */

EIF_UNION Fo7kzft (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_REFERENCE Result = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(3,Result);
	RTLR(2,ur1);

	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("new_cursor", RTUD(2246), Current, 0, 0, 30278);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2246,2266,-8,1,737,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2266, typarr);

		tr1 = RTLN(typres);

	}
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2266, 6, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1);
	RTCI2(tr1);
	Result = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("valid_cursor", EX_POST);
		ur1 = RTCCL(Result);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2246, 6, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_REF; r.value.EIF_REFERENCE_value = Result; return r; }
}

/* item_storage_put */

void Fo7l9a1 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("item_storage_put", RTUD(2246), Current, 0, 2, 30280);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
		RTTE((EIF_BOOLEAN)(arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 164, dtype));
	ur1 = RTCCL(arg1);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ur1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		ui4_1 = arg2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2246, 160, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* key_storage_item */

EIF_UNION Fo7mw8o (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("key_storage_item", RTUD(2246), Current, 0, 1, 30281);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 169, dtype));
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* make_item_storage */

void Fo7ou1j (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_item_storage", RTUD(2246), Current, 0, 1, 30283);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2246, 188, Current));
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 188, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 188, dtype));
	ui4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2193, 31, "make", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 164, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* clone_item_storage */

void Fo7phz5 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("clone_item_storage", RTUD(2246), Current, 0, 0, 30258);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 164, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 164, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* item_storage_wipe_out */

void Fo7qsve (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,loc2);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("item_storage_wipe_out", RTUD(2246), Current, 2, 0, 30260);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 55, dtype));
	RTHOOK(2);
	while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 164, dtype));
		ur1 = RTCCL(loc2);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ur1x, ui4_1x);
		RTHOOK(4);
		loc1--;
		RTHOOK(2);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
}

/* key_storage_put */

void Fo7sqn9 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("key_storage_put", RTUD(2246), Current, 0, 2, 30263);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
		RTTE((EIF_BOOLEAN)(arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 169, dtype));
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* clone_key_storage */

void Fo7tdlw (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("clone_key_storage", RTUD(2246), Current, 0, 0, 30264);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 169, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 169, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* key_storage_wipe_out */

void Fo7uog4 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("key_storage_wipe_out", RTUD(2246), Current, 2, 0, 30266);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 55, dtype));
	RTHOOK(2);
	while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 169, dtype));
		ui4_1 = loc2;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(4);
		loc1--;
		RTHOOK(2);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
}

/* make_clashes */

void Fo7vzcd (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_clashes", RTUD(2246), Current, 0, 1, 30267);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2246, 85, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	ui4_1 = arg1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2264, 31, "make", tr1))(tr1, ui4_1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 175, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* clone_clashes */

void Fo7w87m (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("clone_clashes", RTUD(2246), Current, 0, 0, 30269);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 175, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 175, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* clashes_wipe_out */

void Fo7yj2v (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("clashes_wipe_out", RTUD(2246), Current, 1, 0, 30271);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 55, dtype));
	RTHOOK(2);
	while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 175, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2246, 90, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(4);
		loc1--;
		RTHOOK(2);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
}

/* slots_item */

EIF_UNION Fo7_hwq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("slots_item", RTUD(2246), Current, 0, 1, 30273);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 14, dtype));
		RTTE((EIF_BOOLEAN)(arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 181, dtype));
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(2, 2, "item", tr1))(tr1, ui4_1x)).value.EIF_INTEGER_32_value);
	Result = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* slots_put */

void Fo7_4uc (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("slots_put", RTUD(2246), Current, 0, 2, 30274);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 14, dtype));
		RTTE((EIF_BOOLEAN)(arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 181, dtype));
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		ui4_1 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2246, 183, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* clone_slots */

void Fo70srz (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("clone_slots", RTUD(2246), Current, 0, 0, 30275);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 181, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(1, 10, "twin", tr1))(tr1)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 181, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTLO(2);
	RTEE;
}

/* slots_resize */

void Fo71fpl (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION up2x = {0, SK_POINTER};
#undef up2
#define up2 up2x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(4);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("slots_resize", RTUD(2246), Current, 0, 1, 30276);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 14, dtype));
		RTTE((EIF_BOOLEAN)(arg1 > ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2246, 85, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTNHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current + RTWA(2246, 181, dtype));
	ur1 = tr2;
	ui4_1 = arg1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2264, 35, "resize", tr1))(tr1, ur1x, ui4_1x)), ((up2x.type == SK_REF)? (EIF_REFERENCE) 0: (up2x.value.EIF_REFERENCE_value = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 181, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* slots_wipe_out */

void Fo712m7 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("slots_wipe_out", RTUD(2246), Current, 1, 0, 30277);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 14, dtype));
	RTHOOK(2);
	while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 181, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2246, 90, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVPF(2, 14, "put", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(4);
		loc1--;
		RTHOOK(2);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
}

/* make_key_storage */

void Fo7r2qn (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make_key_storage", RTUD(2246), Current, 0, 1, 30262);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(RTWCT(2246, 189, Current));
	RTCI2(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 189, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 189, dtype));
	ui4_1 = arg1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVF(2264, 31, "make", tr1))(tr1, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + RTWA(2246, 169, dtype)) = (EIF_REFERENCE)tr2;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void Fp1sppe (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;

	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTIT("item_storage_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 164, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("item_storage_count", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 164, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(196, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("key_storage_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 169, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("key_storage_count", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 169, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(196, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("clashes_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 175, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("clashes_count", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 175, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(196, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 4, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("slots_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 181, dtype));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("slots_count", Current);
	tr1 = *(EIF_REFERENCE *)(Current + RTWA(2246, 181, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTVPF(196, 0, "count", tr1))(tr1)).value.EIF_INTEGER_32_value);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2246, 14, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32)(ti4_2 + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2247 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif


/*
 * Code for class DS_SPARSE_CONTAINER [BOOLEAN, REFERENCE]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_UNION Fo4h3q1(EIF_REFERENCE);
extern void Fo4d74b(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5x5g0(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5yten(EIF_REFERENCE, EIF_UNION);
extern void Fo4qiw4(EIF_REFERENCE);
extern EIF_UNION Fo4hgtf(EIF_REFERENCE);
extern void Fo4z7yg(EIF_REFERENCE, EIF_UNION);
extern void Fo5jxwc(EIF_REFERENCE);
extern EIF_UNION Fo4jema(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo4iroo(EIF_REFERENCE, EIF_UNION);
extern void Fo4o70w(EIF_REFERENCE, EIF_UNION);
extern void Fo4ok29(EIF_REFERENCE, EIF_UNION);
extern void Fo4kphj(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo4m970(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo4nx5n(EIF_REFERENCE, EIF_UNION);
extern void Fo4lce5(EIF_REFERENCE, EIF_UNION);
extern void Fo4mnae(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo4q5ur(EIF_REFERENCE);
extern EIF_UNION Fo4fi_k(EIF_REFERENCE);
extern void Fo4rtsd(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo4f5x6(EIF_REFERENCE);
extern void Fo4xm6z(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5xije(EIF_REFERENCE);
extern EIF_UNION Fo5mimu(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5m5kg(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5nth2(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5ogfp(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5o3db(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5hz2h(EIF_REFERENCE);
extern void Fo5q056(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5im_3(EIF_REFERENCE);
extern void Fo4sgp_(EIF_REFERENCE);
extern void Fo5vkqj(EIF_REFERENCE, EIF_UNION);
extern void Fo5v7n5(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fo5qd8k(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo5lvo7(EIF_REFERENCE, EIF_UNION);
extern void Fo5ro3t(EIF_REFERENCE, EIF_UNION);
extern void Fo5sb1f(EIF_REFERENCE, EIF_UNION);
extern void Fo5szz1(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo4j1jx(EIF_REFERENCE);
extern void Fo5go68(EIF_REFERENCE);
extern void Fo5k7rl(EIF_REFERENCE, EIF_UNION);
extern void Fo5uxsx(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5wvls(EIF_REFERENCE);
extern void Fo4l_cs(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo5kktz(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo5tmxo(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern void Fo5t9va(EIF_REFERENCE, EIF_UNION, EIF_UNION);
extern EIF_UNION Fo5i9yq(EIF_REFERENCE);
extern EIF_UNION Fo4ev1y(EIF_REFERENCE);
extern void Fo4pvzi(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo4wz9c(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5pray(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo4gtvt(EIF_REFERENCE);
extern EIF_UNION Fo4wcbq(EIF_REFERENCE, EIF_UNION);
extern EIF_UNION Fo5hb4v(EIF_REFERENCE);
extern void Fp1qrv6(EIF_REFERENCE, int);
extern void EIF_Minit2234(void);

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

/* capacity */

EIF_UNION Fo4h3q1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2233,66, Dtype(Current)));
	return r;
}

/* make */

void Fo4d74b (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(2);
	RTLR(1,tr1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("make", RTUD(2233), Current, 0, 1, 29957);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(3);
	ui4_1 = (EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 95, dtype))(Current, ui4_1x);
	RTHOOK(4);
	ui4_1 = (EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 99, dtype))(Current, ui4_1x);
	RTHOOK(5);
	ui4_1 = (EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 104, dtype))(Current, ui4_1x);
	RTHOOK(6);
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 149, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 115, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(7);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 115, dtype));
	ui4_1 = (EIF_INTEGER_32)(ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 109, dtype))(Current, ui4_1x);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 116, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(10);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 121, dtype))(Current);
	RTHOOK(12);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 64, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(2233, 125, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("empty", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("before", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 33, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* new_capacity */

EIF_UNION Fo5x5g0 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("new_capacity", RTUD(2233), Current, 0, 1, 29950);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype));
		RTTE((EIF_BOOLEAN)(arg1 >= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)(((EIF_INTEGER_32) 2L) * arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* new_modulus */

EIF_UNION Fo5yten (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("new_modulus", RTUD(2233), Current, 0, 1, 29975);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_capacity_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_INTEGER_32)(EIF_INTEGER_32)((EIF_INTEGER_32)((EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 3L)) / ((EIF_INTEGER_32) 2L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("modulus_large_enough", EX_POST);
		if ((EIF_BOOLEAN)(Result > arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* remove_found_item */

void Fo4qiw4 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("remove_found_item", RTUD(2233), Current, 0, 0, 29976);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("item_found", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 69, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 120, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 94, dtype))(Current, ui4_1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 121, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("one_less", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(2);
	RTEE;
}

/* count */

EIF_UNION Fo4hgtf (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = *(EIF_INTEGER_32 *)(Current + RTWA(2233,65, Dtype(Current)));
	return r;
}

/* remove_position */

void Fo4z7yg (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(4,loc3);
	RTLR(2,ur1);
	RTLR(3,loc5);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTEAA("remove_position", RTUD(2233), Current, 5, 1, 29984);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 88, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_slot", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 89, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}

	RTHOOK(3);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
	if ((EIF_BOOLEAN)(arg1 != ti4_2)) {
		RTHOOK(4);
		ui4_1 = arg1;
		loc2 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 86, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
		RTHOOK(5);
		ur1 = RTCCL(loc2);
		loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 93, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);

		RTHOOK(6);
		ui4_1 = loc4;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 110, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 == arg1)) {
			RTHOOK(7);
			*(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype)) = (EIF_INTEGER_32)arg1;
			RTHOOK(8);
			*(EIF_INTEGER_32 *)(Current + RTWA(2233, 118, dtype)) = (EIF_INTEGER_32)loc4;
			RTHOOK(9);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
			*(EIF_INTEGER_32 *)(Current + RTWA(2233, 119, dtype)) = (EIF_INTEGER_32)ti4_2;
		} else {
			RTHOOK(10);
			loc5 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 91, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTHOOK(11);
			ur1 = NULL;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 92, dtype))(Current, ur1x);
			RTHOOK(12);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 90, dtype))(Current, ur1x);
			RTHOOK(13);
			ur1 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 92, dtype))(Current, ur1x);
		}

	}

	RTHOOK(14);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 129, dtype))(Current, ui4_1x);

	RTHOOK(15);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 119, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
		RTHOOK(16);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
		ui4_1 = ti4_2;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 118, dtype));
		ui4_2 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 111, dtype))(Current, ui4_1x, ui4_2x);
	} else {
		RTHOOK(17);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
		ui4_1 = ti4_2;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 119, dtype));
		ui4_2 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 105, dtype))(Current, ui4_1x, ui4_2x);
	}

	RTHOOK(18);
	uc1 = loc1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 85, dtype))(Current, uc1x, ui4_1x);
	RTHOOK(19);
	ur1 = RTCCL(loc3);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 100, dtype))(Current, ur1x, ui4_1x);

	RTHOOK(20);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 116, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
	ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	if ((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_2 == ti4_3) && (EIF_BOOLEAN)(ti4_4 == ti4_5))) {
		RTHOOK(21);
		(*(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype)))--;
		RTHOOK(22);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
		ui4_2 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 105, dtype))(Current, ui4_1x, ui4_2x);
	} else {
		RTHOOK(23);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 124, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 116, dtype));
		ui4_1 = (EIF_INTEGER_32)(ti4_2 - ti4_3);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
		ui4_2 = ti4_4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 105, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(24);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
		*(EIF_INTEGER_32 *)(Current + RTWA(2233, 116, dtype)) = (EIF_INTEGER_32)ti4_2;
	}

	RTHOOK(25);
	(*(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype)))--;
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("one_less", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32)(ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg1
}

/* move_all_cursors_after */

void Fo5jxwc (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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

	RTLI(5);
	RTLR(3,tr1);
	RTLR(1,Current);
	RTLR(0,loc1);
	RTLR(2,loc2);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("move_all_cursors_after", RTUD(2233), Current, 2, 0, 29952);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(2233, 125, dtype));
	RTHOOK(2);
	while (!((EIF_BOOLEAN)(loc1 == NULL))) {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", loc1))(loc1, ui4_1x);
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2234, 58, "next_cursor", loc1));
		loc2 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(5);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 38, "set_next_cursor", loc1))(loc1, ur1x);
		RTHOOK(6);
		loc1 = (EIF_REFERENCE)RTCCL(loc2);
		RTHOOK(2);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(4);
	RTEE;
}

/* has */

EIF_UNION Fo4jema (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc2);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("has", RTUD(2233), Current, 2, 1, 29965);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2233, 2, dtype));

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {

		RTHOOK(4);
		while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {

			RTHOOK(5);
			tc1 = '\0';
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 > ti4_2)) {
				ui4_1 = loc1;
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
				uc1 = tc2;
				uc2 = arg1;
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2175, 31, "test", loc2))(loc2, uc1x, uc2x)).value.EIF_BOOLEAN_value);
				tc1 = tc2;
			}
			if (tc1) {
				RTHOOK(6);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(7);
				loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(8);
				loc1--;
			}

			RTHOOK(4);
			;
		}

	} else {

		RTHOOK(9);
		while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {

			RTHOOK(10);
			tc1 = '\0';
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 > ti4_2)) {
				ui4_1 = loc1;
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
				tc1 = (EIF_BOOLEAN)(tc2 == arg1);
			}
			if (tc1) {
				RTHOOK(11);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(12);
				loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(13);
				loc1--;
			}

			RTHOOK(9);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("not_empty", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* occurrences */

EIF_UNION Fo4iroo (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_INTEGER_32 Result = (EIF_INTEGER_32) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_BOOLEAN_value
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc2);

	RTLU (SK_INT32, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTEAA("occurrences", RTUD(2233), Current, 2, 1, 29964);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current + RTWA(2233, 2, dtype));

	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {

		RTHOOK(4);
		while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {

			RTHOOK(5);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 > ti4_2)) {

				RTHOOK(6);
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
				uc1 = tc1;
				uc2 = arg1;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2175, 31, "test", loc2))(loc2, uc1x, uc2x)).value.EIF_BOOLEAN_value);
				if (tc1) {
					RTHOOK(7);
					Result++;
				}

			}

			RTHOOK(8);
			loc1--;
			RTHOOK(4);
			;
		}

	} else {

		RTHOOK(9);
		while (!((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L)))) {

			RTHOOK(10);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_1 > ti4_2)) {

				RTHOOK(11);
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
				if ((EIF_BOOLEAN)(tc1 == arg1)) {
					RTHOOK(12);
					Result++;
				}

			}

			RTHOOK(13);
			loc1--;
			RTHOOK(9);
			;
		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("has", EX_POST);
		tc1 = '\01';
		uc1 = arg1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 68, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			tc1 = (EIF_BOOLEAN)(Result >= ((EIF_INTEGER_32) 1L));
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_UNION r; r.type = SK_INT32; r.value.EIF_INTEGER_32_value = Result; return r; }
#undef arg1
}

/* copy */

void Fo4o70w (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("copy", RTUD(2233), Current, 1, 1, 29974);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 48, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	if (!RTCEQ(arg1, Current)) {
		RTHOOK(4);
		loc1 = *(EIF_REFERENCE *)(Current + RTWA(2233, 125, dtype));
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 126, dtype))(Current);
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 31, dtype))(Current, ur1x);
		RTHOOK(7);
		RTAR(Current, NULL);
		*(EIF_REFERENCE *)(Current + RTWA(2233, 125, dtype)) = (EIF_REFERENCE)NULL;

		RTHOOK(8);
		tc1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			ur1 = RTCCL(loc1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		if (tc1) {
			RTHOOK(9);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + RTWA(2233, 125, dtype)) = (EIF_REFERENCE)RTCCL(loc1);
		} else {
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 64, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(2233, 125, dtype)) = (EIF_REFERENCE)RTCCL(tr1);
		}

		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 121, dtype))(Current);
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 96, dtype))(Current);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 101, dtype))(Current);
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 112, dtype))(Current);
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 106, dtype))(Current);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("is_equal", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 150, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* search */

void Fo4ok29 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("search", RTUD(2233), Current, 0, 1, 29973);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 90, dtype))(Current, ur1x);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 120, dtype)) = (EIF_INTEGER_32)ti4_1;
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* do_all */

void Fo4kphj (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("do_all", RTUD(2233), Current, 1, 1, 29967);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	while (!((EIF_BOOLEAN)(loc1 > ti4_1))) {

		RTHOOK(4);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 > ti4_3)) {
			RTHOOK(5);
			{
				static int16 typarr [] = {2233,-7,1,726,743,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

				tr1 = RTLNTS(typres, 2, 1);

			}
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			((EIF_TYPED_ELEMENT *)tr1+1)->element.barg = tc1;
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(7, 11, "call", arg1))(arg1, ur1x);
		}

		RTHOOK(6);
		loc1++;
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* there_exists */

EIF_UNION Fo4m970 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("there_exists", RTUD(2233), Current, 1, 1, 29971);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	while (!((EIF_BOOLEAN)(loc1 > ti4_1))) {

		RTHOOK(4);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 > ti4_3)) {

			RTHOOK(5);
			{
				static int16 typarr [] = {2233,-7,1,726,743,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

				tr1 = RTLNTS(typres, 2, 1);

			}
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			((EIF_TYPED_ELEMENT *)tr1+1)->element.barg = tc1;
			ur1 = RTCCL(tr1);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(9, 1, "item", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(6);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
				RTHOOK(7);
				loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
				loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
			}

		}

		RTHOOK(8);
		loc1++;
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* for_all */

EIF_UNION Fo4nx5n (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("for_all", RTUD(2233), Current, 1, 1, 29972);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;

	RTHOOK(3);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	while (!((EIF_BOOLEAN)(loc1 > ti4_1))) {

		RTHOOK(5);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 > ti4_3)) {

			RTHOOK(6);
			{
				static int16 typarr [] = {2233,-7,1,726,743,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

				tr1 = RTLNTS(typres, 2, 1);

			}
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			((EIF_TYPED_ELEMENT *)tr1+1)->element.barg = tc1;
			ur1 = RTCCL(tr1);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(9, 1, "item", arg1))(arg1, ur1x)).value.EIF_BOOLEAN_value);
			if ((EIF_BOOLEAN) !tc1) {
				RTHOOK(7);
				Result = (EIF_BOOLEAN)(EIF_BOOLEAN) 0;
				RTHOOK(8);
				loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
				loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
			}

		}

		RTHOOK(9);
		loc1++;
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* do_all_with_index */

void Fo4lce5 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(2,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("do_all_with_index", RTUD(2233), Current, 2, 1, 29968);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	while (!((EIF_BOOLEAN)(loc1 > ti4_1))) {

		RTHOOK(4);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 > ti4_3)) {
			RTHOOK(5);
			loc2++;
			RTHOOK(6);
			{
				static int16 typarr [] = {2233,-7,2,726,743,737,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, Dftype(Current), 726, typarr);

				tr1 = RTLNTS(typres, 3, 1);

			}
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			((EIF_TYPED_ELEMENT *)tr1+1)->element.barg = tc1;
			((EIF_TYPED_ELEMENT *)tr1+2)->element.i32arg = loc2;
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(7, 11, "call", arg1))(arg1, ur1x);
		}

		RTHOOK(7);
		loc1++;
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* do_if_with_index */

void Fo4mnae (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTEAA("do_if_with_index", RTUD(2233), Current, 3, 2, 29970);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	while (!((EIF_BOOLEAN)(loc1 > ti4_1))) {

		RTHOOK(5);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 > ti4_3)) {
			RTHOOK(6);
			loc2++;
			RTHOOK(7);
			ui4_1 = loc1;
			loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);

			RTHOOK(8);
			{
				static int16 typarr [] = {2233,-7,2,726,743,737,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, dftype, 726, typarr);

				tr1 = RTLNTS(typres, 3, 1);

			}
			((EIF_TYPED_ELEMENT *)tr1+1)->element.barg = loc3;
			((EIF_TYPED_ELEMENT *)tr1+2)->element.i32arg = loc2;
			ur1 = RTCCL(tr1);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(9, 1, "item", arg2))(arg2, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(9);
				{
					static int16 typarr [] = {2233,-7,2,726,743,737,-1};
					int16 typres;
					static int16 typcache = -1;

					typres = RTCID2(&typcache, dftype, 726, typarr);

					tr1 = RTLNTS(typres, 3, 1);

				}
				((EIF_TYPED_ELEMENT *)tr1+1)->element.barg = loc3;
				((EIF_TYPED_ELEMENT *)tr1+2)->element.i32arg = loc2;
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(7, 11, "call", arg1))(arg1, ur1x);
			}

		}

		RTHOOK(10);
		loc1++;
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg2
#undef arg1
}

/* wipe_out */

void Fo4q5ur (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("wipe_out", RTUD(2233), Current, 0, 0, 29977);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 126, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 121, dtype))(Current);

	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype));
	if ((EIF_BOOLEAN)(ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 98, dtype))(Current);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 103, dtype))(Current);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 108, dtype))(Current);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 114, dtype))(Current);
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
		RTHOOK(9);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2233, 116, dtype)) = (EIF_INTEGER_32)ti4_1;
		RTHOOK(10);
		*(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype)) = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	}

	RTHOOK(11);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("wiped_out", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(2);
	RTEE;
}

/* first */

EIF_UNION Fo4fi_k (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("first", RTUD(2233), Current, 1, 0, 29959);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	ui4_1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(ti4_1 > ti4_2))) {
		RTHOOK(4);
		loc1++;
		RTHOOK(3);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		;
	}

	RTHOOK(5);
	ui4_1 = loc1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("has_first", EX_POST);
		uc1 = Result;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 68, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* resize */

void Fo4rtsd (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("resize", RTUD(2233), Current, 3, 1, 29978);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype));
		RTTE((EIF_BOOLEAN)(arg1 >= ti4_1), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 121, dtype))(Current);
	RTHOOK(3);
	ui4_1 = arg1;
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 149, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	RTHOOK(4);
	ui4_1 = (EIF_INTEGER_32)(loc1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 113, dtype))(Current, ui4_1x);

	RTHOOK(5);
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 115, dtype));
	RTHOOK(6);
	while (!((EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(7);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 111, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(8);
		loc2--;
		RTHOOK(6);
		;
	}

	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 115, dtype)) = (EIF_INTEGER_32)loc1;

	RTHOOK(10);
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	RTHOOK(11);
	while (!((EIF_BOOLEAN)(loc2 < ((EIF_INTEGER_32) 1L)))) {

		RTHOOK(12);
		ui4_1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 > ti4_2)) {
			RTHOOK(13);
			ui4_1 = loc2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 86, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 93, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
			RTHOOK(14);
			ui4_1 = loc3;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 110, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 105, dtype))(Current, ui4_1x, ui4_2x);
			RTHOOK(15);
			ui4_1 = loc2;
			ui4_2 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 111, dtype))(Current, ui4_1x, ui4_2x);
		}

		RTHOOK(16);
		loc2--;
		RTHOOK(11);
		;
	}

	RTHOOK(17);
	ui4_1 = (EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 97, dtype))(Current, ui4_1x);
	RTHOOK(18);
	ui4_1 = (EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 102, dtype))(Current, ui4_1x);
	RTHOOK(19);
	ui4_1 = (EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 107, dtype))(Current, ui4_1x);
	RTHOOK(20);
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype)) = (EIF_INTEGER_32)arg1;
	RTHOOK(21);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("capacity_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* last */

EIF_UNION Fo4f5x6 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("last", RTUD(2233), Current, 1, 0, 29960);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	RTHOOK(3);
	ui4_1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
	while (!((EIF_BOOLEAN)(ti4_1 > ti4_2))) {
		RTHOOK(4);
		loc1--;
		RTHOOK(3);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		;
	}

	RTHOOK(5);
	ui4_1 = loc1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("has_last", EX_POST);
		uc1 = Result;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 68, dtype))(Current, uc1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* search_position */

void Fo4xm6z (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ur2x = {0, SK_REF};
#undef ur2
#define ur2 ur2x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(7);
	RTLR(4,tr1);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(3,ur1);
	RTLR(6,loc3);
	RTLR(2,loc4);
	RTLR(5,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTEAA("search_position", RTUD(2233), Current, 4, 1, 29983);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);

	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 115, dtype));
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 110, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype)) = (EIF_INTEGER_32)ti4_1;
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 115, dtype));
		*(EIF_INTEGER_32 *)(Current + RTWA(2233, 118, dtype)) = (EIF_INTEGER_32)ti4_1;
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2233, 119, dtype)) = (EIF_INTEGER_32)ti4_1;
	} else {
		RTHOOK(5);
		loc4 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 91, dtype))(Current)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);

		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {

			RTHOOK(7);
			tc1 = '\01';
			tc2 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
			if (!(EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				ur1 = RTCCL(arg1);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
				ui4_1 = ti4_1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 86, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				ur2 = RTCCL(tr1);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2152, 31, "test", loc4))(loc4, ur1x, ur2x)).value.EIF_BOOLEAN_value);
				tc2 = (EIF_BOOLEAN) !tc3;
			}
			if (!tc2) {
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(loc3);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2152, 31, "test", loc4))(loc4, ur1x, ur2x)).value.EIF_BOOLEAN_value);
				tc1 = tc2;
			}
			if (tc1) {

				RTHOOK(8);
				ur1 = RTCCL(arg1);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 93, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
				*(EIF_INTEGER_32 *)(Current + RTWA(2233, 118, dtype)) = (EIF_INTEGER_32)ti4_1;
				RTHOOK(9);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 118, dtype));
				ui4_1 = ti4_1;
				loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 110, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
				RTHOOK(10);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
				*(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype)) = (EIF_INTEGER_32)ti4_1;
				RTHOOK(11);
				loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
				loc2 = (EIF_INTEGER_32)loc2;
				RTHOOK(12);
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
				while (!((EIF_BOOLEAN)(loc1 == ti4_1))) {

					RTHOOK(13);
					ur1 = RTCCL(arg1);
					ui4_1 = loc1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 86, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ur2 = RTCCL(tr1);
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2152, 31, "test", loc4))(loc4, ur1x, ur2x)).value.EIF_BOOLEAN_value);
					if (tc1) {
						RTHOOK(14);
						*(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype)) = (EIF_INTEGER_32)loc1;
						RTHOOK(15);
						loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
						loc1 = (EIF_INTEGER_32)loc1;
					} else {
						RTHOOK(16);
						loc2 = (EIF_INTEGER_32)loc1;
						RTHOOK(17);
						ui4_1 = loc1;
						ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
						loc1 = (EIF_INTEGER_32)ti4_2;
					}

					RTHOOK(12);
					ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
					;
				}

				RTHOOK(18);
				*(EIF_INTEGER_32 *)(Current + RTWA(2233, 119, dtype)) = (EIF_INTEGER_32)loc2;
			}

		} else {

			RTHOOK(19);
			tc1 = '\01';
			tc2 = '\01';
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
			if (!(EIF_BOOLEAN)(ti4_2 == ti4_3)) {
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
				ui4_1 = ti4_2;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 86, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
				tc2 = !RTCEQ(arg1, tr1);
			}
			if (!tc2) {
				tc1 = RTCEQ(arg1, loc3);
			}
			if (tc1) {

				RTHOOK(20);
				ur1 = RTCCL(arg1);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 93, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
				*(EIF_INTEGER_32 *)(Current + RTWA(2233, 118, dtype)) = (EIF_INTEGER_32)ti4_2;
				RTHOOK(21);
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 118, dtype));
				ui4_1 = ti4_2;
				loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 110, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
				RTHOOK(22);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
				*(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype)) = (EIF_INTEGER_32)ti4_2;
				RTHOOK(23);
				loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
				loc2 = (EIF_INTEGER_32)loc2;
				RTHOOK(24);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
				while (!((EIF_BOOLEAN)(loc1 == ti4_2))) {

					RTHOOK(25);
					ui4_1 = loc1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 86, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					if (RTCEQ(arg1, tr1)) {
						RTHOOK(26);
						*(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype)) = (EIF_INTEGER_32)loc1;
						RTHOOK(27);
						loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
						loc1 = (EIF_INTEGER_32)loc1;
					} else {
						RTHOOK(28);
						loc2 = (EIF_INTEGER_32)loc1;
						RTHOOK(29);
						ui4_1 = loc1;
						ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
						loc1 = (EIF_INTEGER_32)ti4_3;
					}

					RTHOOK(24);
					ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
					;
				}

				RTHOOK(30);
				*(EIF_INTEGER_32 *)(Current + RTWA(2233, 119, dtype)) = (EIF_INTEGER_32)loc2;
			}

		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("slots_position_set", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 118, dtype));
		ur1 = RTCCL(arg1);
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 93, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(32);
		RTCT("clashes_previous_position_set", EX_POST);
		tc1 = '\01';
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 119, dtype));
		ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_3 != ti4_4) && (EIF_BOOLEAN)(ti4_5 != ti4_6))) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 119, dtype));
			ui4_1 = ti4_3;
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
			tc1 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("clashes_previous_position_not_set", EX_POST);
		tc1 = '\01';
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 119, dtype));
		ti4_6 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_3 != ti4_4) && (EIF_BOOLEAN)(ti4_5 == ti4_6))) {
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 118, dtype));
			ui4_1 = ti4_3;
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 110, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
			tc1 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg1
}

/* after_position */

EIF_UNION Fo5xije (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) -2L);
	return r;
}
/* cursor_item */

EIF_UNION Fo5mimu (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("cursor_item", RTUD(2233), Current, 0, 1, 29956);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_cursor_not_off", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2234, 53, "position", arg1));
	ui4_1 = ti4_1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* cursor_after */

EIF_UNION Fo5m5kg (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("cursor_after", RTUD(2233), Current, 0, 1, 29936);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2234, 53, "position", arg1));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* cursor_before */

EIF_UNION Fo5nth2 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("cursor_before", RTUD(2233), Current, 0, 1, 29958);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2234, 53, "position", arg1));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 146, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* cursor_is_first */

EIF_UNION Fo5ogfp (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("cursor_is_first", RTUD(2233), Current, 1, 1, 29938);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(4);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(5);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		while (!((EIF_BOOLEAN)(ti4_1 > ti4_2))) {
			RTHOOK(6);
			loc1++;
			RTHOOK(5);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			;
		}

		RTHOOK(7);
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2234, 53, "position", arg1));
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_3 == loc1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("not_empty", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("a_cursor_not_off", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 130, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 62, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN)(tc2 == tc3);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* cursor_is_last */

EIF_UNION Fo5o3db (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTEAA("cursor_is_last", RTUD(2233), Current, 1, 1, 29940);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
		RTHOOK(5);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		while (!((EIF_BOOLEAN)(ti4_1 > ti4_2))) {
			RTHOOK(6);
			loc1--;
			RTHOOK(5);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			;
		}

		RTHOOK(7);
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2234, 53, "position", arg1));
		Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_3 == loc1);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("not_empty", EX_POST);
		tc1 = '\01';
		if (Result) {
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("a_cursor_not_off", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN) !tc2;
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("definition", EX_POST);
		tc1 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 130, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 63, dtype))(Current)).value.EIF_BOOLEAN_value);
			tc1 = (EIF_BOOLEAN)(tc2 == tc3);
		}
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* free_watermark */

EIF_UNION Fo5hz2h (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
	return r;
}
/* cursor_start */

void Fo5q056 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTEAA("cursor_start", RTUD(2233), Current, 3, 1, 29946);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);
	} else {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		loc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);

		RTHOOK(6);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
		RTHOOK(8);
		tc1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 > loc2)) {
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 > ti4_2);
		}
		while (!(tc1)) {
			RTHOOK(9);
			loc1++;
			RTHOOK(8);
			tc1 = '\01';
			if (!(EIF_BOOLEAN)(loc1 > loc2)) {
				ui4_1 = loc1;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
				tc1 = (EIF_BOOLEAN)(ti4_1 > ti4_2);
			}
			;
		}


		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc1 > loc2)) {
			RTHOOK(11);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

			RTHOOK(12);
			if ((EIF_BOOLEAN) !loc3) {
				RTHOOK(13);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 15, dtype))(Current, ur1x);
			}

		} else {
			RTHOOK(14);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

			RTHOOK(15);
			if (loc3) {
				RTHOOK(16);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 53, dtype))(Current, ur1x);
			}

		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("empty_behavior", EX_POST);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc3) {
			ur1 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 131, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("not_empty_behavior", EX_POST);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc3) {
			ur1 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 133, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* free_offset */

EIF_UNION Fo5im_3 (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
	return r;
}
/* compress */

void Fo4sgp_ (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_UNION up1x = {0, SK_POINTER};
#undef up1
#define up1 up1x.value.EIF_POINTER_value
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_UNION ui4_2x = {0, SK_INT32};
#undef ui4_2
#define ui4_2 ui4_2x.value.EIF_INTEGER_32_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(4);
	RTLR(1,tr1);
	RTLR(0,Current);
	RTLR(2,ur1);
	RTLR(3,loc6);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_REF, &loc6);
	RTEAA("compress", RTUD(2233), Current, 6, 0, 29979);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype));
		ti4_2 = ti4_3;
		in_assertion = 0;
	}

	RTHOOK(1);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype));
	if ((EIF_BOOLEAN)(ti4_3 != ti4_4)) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 121, dtype))(Current);
		RTHOOK(3);
		loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));

		RTHOOK(4);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(5);
		while (!((EIF_BOOLEAN)(loc1 > loc3))) {

			RTHOOK(6);
			ui4_1 = loc1;
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			if ((EIF_BOOLEAN)(ti4_3 > ti4_4)) {
				RTHOOK(7);
				loc2++;

				RTHOOK(8);
				if ((EIF_BOOLEAN)(loc2 != loc1)) {
					RTHOOK(9);
					ui4_1 = loc1;
					tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
					uc1 = tc1;
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 85, dtype))(Current, uc1x, ui4_1x);
					RTHOOK(10);
					ui4_1 = loc1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 86, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
					ur1 = RTCCL(tr1);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 100, dtype))(Current, ur1x, ui4_1x);
					RTHOOK(11);
					ui4_1 = loc1;
					ui4_2 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 127, dtype))(Current, ui4_1x, ui4_2x);
				}

			}

			RTHOOK(12);
			loc1++;
			RTHOOK(5);
			;
		}


		RTHOOK(13);
		loc2++;
		RTHOOK(14);
		while (!((EIF_BOOLEAN)(loc2 > loc3))) {
			RTHOOK(15);
			uc1 = loc5;
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 85, dtype))(Current, uc1x, ui4_1x);
			RTHOOK(16);
			ur1 = RTCCL(loc6);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 100, dtype))(Current, ur1x, ui4_1x);
			RTHOOK(17);
			loc2++;
			RTHOOK(14);
			;
		}

		RTHOOK(18);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 108, dtype))(Current);
		RTHOOK(19);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 114, dtype))(Current);
		RTHOOK(20);
		loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype));

		RTHOOK(21);
		loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
		RTHOOK(22);
		while (!((EIF_BOOLEAN)(loc1 > loc3))) {
			RTHOOK(23);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 86, dtype))(Current, ui4_1x)), ((up1x.type == SK_REF)? (EIF_REFERENCE) 0: (up1x.value.EIF_REFERENCE_value = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.value.EIF_REFERENCE_value);
			ur1 = RTCCL(tr1);
			loc4 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 93, dtype))(Current, ur1x)).value.EIF_INTEGER_32_value);
			RTHOOK(24);
			ui4_1 = loc4;
			ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 110, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_3;
			ui4_2 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 105, dtype))(Current, ui4_1x, ui4_2x);
			RTHOOK(25);
			ui4_1 = loc1;
			ui4_2 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 111, dtype))(Current, ui4_1x, ui4_2x);
			RTHOOK(26);
			loc1++;
			RTHOOK(22);
			;
		}

		RTHOOK(27);
		*(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype)) = (EIF_INTEGER_32)loc3;
		RTHOOK(28);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		*(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype)) = (EIF_INTEGER_32)ti4_3;
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("same_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("compressed", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 65, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("not_reszied", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTLO(8);
	RTEE;
}

/* cursor_go_before */

void Fo5vkqj (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTEAA("cursor_go_before", RTUD(2233), Current, 1, 1, 29990);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 146, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

	RTHOOK(5);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 15, dtype))(Current, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("a_cursor_before", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 132, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* cursor_go_to */

void Fo5v7n5 (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(0,arg1);
	RTLR(3,arg2);
	RTLR(2,Current);
	RTLR(1,ur1);
	RTLR(4,ur2);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTEAA("cursor_go_to", RTUD(2233), Current, 1, 2, 29953);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("other_valid", EX_PRE);
		ur1 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2234, 53, "position", arg2));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

	RTHOOK(7);
	ur1 = RTCCL(arg1);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	if ((EIF_BOOLEAN) !tc1) {

		RTHOOK(8);
		if (loc1) {
			RTHOOK(9);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 53, dtype))(Current, ur1x);
		}

	} else {
		RTHOOK(10);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(11);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 15, dtype))(Current, ur1x);
	}}

	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("same_position", EX_POST);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 136, dtype))(Current, ur1x, ur2x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg2
#undef arg1
}

/* cursor_same_position */

EIF_UNION Fo5qd8k (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(3,arg2);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTEAA("cursor_same_position", RTUD(2233), Current, 0, 2, 29944);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2234, 53, "position", arg1));
	ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2234, 53, "position", arg2));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg2
#undef arg1
}

/* move_cursors_forth */

void Fo5lvo7 (EIF_REFERENCE Current, EIF_UNION arg1x)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTEAA("move_cursors_forth", RTUD(2233), Current, 2, 1, 29955);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_old_position", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 88, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(2);
	loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(arg1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	RTHOOK(4);
	tc1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 > loc2)) {
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		tc1 = (EIF_BOOLEAN)(ti4_1 > ti4_2);
	}
	while (!(tc1)) {
		RTHOOK(5);
		loc1++;
		RTHOOK(4);
		tc1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 > loc2)) {
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 > ti4_2);
		}
		;
	}


	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 > loc2)) {
		RTHOOK(7);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 128, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(8);
		ui4_1 = arg1;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTWF(2233, 127, dtype))(Current, ui4_1x, ui4_2x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* cursor_finish */

void Fo5ro3t (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTEAA("cursor_finish", RTUD(2233), Current, 2, 1, 29948);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
	if (tc1) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 146, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);
	} else {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);

		RTHOOK(6);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
		RTHOOK(7);
		tc1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L))) {
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 > ti4_2);
		}
		while (!(tc1)) {
			RTHOOK(8);
			loc1--;
			RTHOOK(7);
			tc1 = '\01';
			if (!(EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L))) {
				ui4_1 = loc1;
				ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
				ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
				tc1 = (EIF_BOOLEAN)(ti4_1 > ti4_2);
			}
			;
		}


		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(10);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 146, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

			RTHOOK(11);
			if ((EIF_BOOLEAN) !loc2) {
				RTHOOK(12);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 15, dtype))(Current, ur1x);
			}

		} else {
			RTHOOK(13);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

			RTHOOK(14);
			if (loc2) {
				RTHOOK(15);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 53, dtype))(Current, ur1x);
			}

		}

	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("empty_behavior", EX_POST);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
		if (tc3) {
			ur1 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 132, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("not_empty_behavior", EX_POST);
		tc2 = '\01';
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 18, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc3) {
			ur1 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 134, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc2 = tc3;
		}
		if (tc2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* cursor_forth */

void Fo5sb1f (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_INT32, &loc4);
	RTEAA("cursor_forth", RTUD(2233), Current, 4, 1, 29937);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_cursor_not_after", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 131, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2234, 53, "position", arg1));
	loc4 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 146, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(loc4 == ti4_1)) {
		RTHOOK(6);
		loc3 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
	} else {
		RTHOOK(7);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc4 + ((EIF_INTEGER_32) 1L));
	}


	RTHOOK(8);
	loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	RTHOOK(9);
	tc1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 > loc2)) {
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		tc1 = (EIF_BOOLEAN)(ti4_1 > ti4_2);
	}
	while (!(tc1)) {
		RTHOOK(10);
		loc1++;
		RTHOOK(9);
		tc1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 > loc2)) {
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 > ti4_2);
		}
		;
	}


	RTHOOK(11);
	if ((EIF_BOOLEAN)(loc1 > loc2)) {
		RTHOOK(12);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

		RTHOOK(13);
		if ((EIF_BOOLEAN) !loc3) {
			RTHOOK(14);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 15, dtype))(Current, ur1x);
		}

	} else {
		RTHOOK(15);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

		RTHOOK(16);
		if (loc3) {
			RTHOOK(17);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 53, dtype))(Current, ur1x);
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg1
}

/* cursor_back */

void Fo5szz1 (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_INT32, &loc3);
	RTEAA("cursor_back", RTUD(2233), Current, 3, 1, 29988);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_cursor_not_before", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 132, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE((EIF_BOOLEAN) !tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2234, 53, "position", arg1));
	loc3 = (EIF_INTEGER_32)ti4_1;

	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
		RTHOOK(6);
		loc2 = (EIF_BOOLEAN)(EIF_BOOLEAN) 1;
		RTHOOK(7);
		loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	} else {
		RTHOOK(8);
		loc1 = (EIF_INTEGER_32)(EIF_INTEGER_32)(loc3 - ((EIF_INTEGER_32) 1L));
	}


	RTHOOK(9);
	tc1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L))) {
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		tc1 = (EIF_BOOLEAN)(ti4_1 > ti4_2);
	}
	while (!(tc1)) {
		RTHOOK(10);
		loc1--;
		RTHOOK(9);
		tc1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L))) {
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
			ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
			tc1 = (EIF_BOOLEAN)(ti4_1 > ti4_2);
		}
		;
	}


	RTHOOK(11);
	if ((EIF_BOOLEAN)(loc1 < ((EIF_INTEGER_32) 1L))) {
		RTHOOK(12);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 146, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

		RTHOOK(13);
		if ((EIF_BOOLEAN) !loc2) {
			RTHOOK(14);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 15, dtype))(Current, ur1x);
		}

	} else {
		RTHOOK(15);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

		RTHOOK(16);
		if (loc2) {
			RTHOOK(17);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 53, dtype))(Current, ur1x);
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* found */

EIF_UNION Fo4j1jx (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("found", RTUD(2233), Current, 0, 0, 29951);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 120, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 != ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 120, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 != ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* unset_found_item */

void Fo5go68 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAA("unset_found_item", RTUD(2233), Current, 0, 0, 29947);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
	*(EIF_INTEGER_32 *)(Current + RTWA(2233, 120, dtype)) = (EIF_INTEGER_32)ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_found", EX_POST);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 69, dtype))(Current)).value.EIF_BOOLEAN_value);
		if ((EIF_BOOLEAN) !tc1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("found_position_unset", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 120, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
}

/* move_cursors_after */

void Fo5k7rl (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(6);
	RTLR(3,tr1);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(4,loc3);
	RTLR(5,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTEAA("move_cursors_after", RTUD(2233), Current, 3, 1, 29954);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_old_position", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 88, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(2233, 125, dtype));

	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(2234, 53, "position", loc1));
	if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", loc1))(loc1, ui4_1x);
	}

	RTHOOK(5);
	loc2 = (EIF_REFERENCE)RTCCL(loc1);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2234, 58, "next_cursor", loc1));
	loc1 = (EIF_REFERENCE)RTCCL(tr1);

	RTHOOK(7);
	while (!((EIF_BOOLEAN)(loc1 == NULL))) {

		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(2234, 53, "position", loc1));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTHOOK(9);
			ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", loc1))(loc1, ui4_1x);
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2234, 58, "next_cursor", loc1));
			loc3 = (EIF_REFERENCE)RTCCL(tr1);
			RTHOOK(11);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 38, "set_next_cursor", loc2))(loc2, ur1x);
			RTHOOK(12);
			ur1 = NULL;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 38, "set_next_cursor", loc1))(loc1, ur1x);
			RTHOOK(13);
			loc1 = (EIF_REFERENCE)RTCCL(loc3);
		} else {
			RTHOOK(14);
			loc2 = (EIF_REFERENCE)RTCCL(loc1);
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2234, 58, "next_cursor", loc1));
			loc1 = (EIF_REFERENCE)RTCCL(tr1);
		}

		RTHOOK(7);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* cursor_go_after */

void Fo5uxsx (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTEAA("cursor_go_after", RTUD(2233), Current, 1, 1, 29969);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	loc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 147, dtype))(Current)).value.EIF_INTEGER_32_value);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", arg1))(arg1, ui4_1x);

	RTHOOK(5);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 15, dtype))(Current, ur1x);
	}

	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("a_cursor_after", EX_POST);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 131, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (tc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg1
}

/* before_position */

EIF_UNION Fo5wvls (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) -1L);
	return r;
}
/* do_if */

void Fo4l_cs (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg2 arg2x.value.EIF_REFERENCE_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(5);
	RTLR(3,tr1);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(4,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTEAA("do_if", RTUD(2233), Current, 2, 2, 29945);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	loc1 = (EIF_INTEGER_32)((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	while (!((EIF_BOOLEAN)(loc1 > ti4_1))) {

		RTHOOK(5);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		if ((EIF_BOOLEAN)(ti4_2 > ti4_3)) {
			RTHOOK(6);
			ui4_1 = loc1;
			loc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);

			RTHOOK(7);
			{
				static int16 typarr [] = {2233,-7,1,726,743,-1};
				int16 typres;
				static int16 typcache = -1;

				typres = RTCID2(&typcache, dftype, 726, typarr);

				tr1 = RTLNTS(typres, 2, 1);

			}
			((EIF_TYPED_ELEMENT *)tr1+1)->element.barg = loc2;
			ur1 = RTCCL(tr1);
			tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTVPF(9, 1, "item", arg2))(arg2, ur1x)).value.EIF_BOOLEAN_value);
			if (tc1) {
				RTHOOK(8);
				{
					static int16 typarr [] = {2233,-7,1,726,743,-1};
					int16 typres;
					static int16 typcache = -1;

					typres = RTCID2(&typcache, dftype, 726, typarr);

					tr1 = RTLNTS(typres, 2, 1);

				}
				((EIF_TYPED_ELEMENT *)tr1+1)->element.barg = loc2;
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVPF(7, 11, "call", arg1))(arg1, ur1x);
			}

		}

		RTHOOK(9);
		loc1++;
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg2
#undef arg1
}

/* move_all_cursors */

void Fo5kktz (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_INTEGER_32_value
	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(3);
	RTLR(2,tr1);
	RTLR(0,Current);
	RTLR(1,loc1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("move_all_cursors", RTUD(2233), Current, 1, 2, 29989);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_old_position", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 88, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_new_position", EX_PRE);
		tc1 = '\0';
		ui4_1 = arg2;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 88, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		if (tc2) {
			ui4_1 = arg2;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 89, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;

	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(2233, 125, dtype));
	RTHOOK(4);
	while (!((EIF_BOOLEAN)(loc1 == NULL))) {

		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(2234, 53, "position", loc1));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTHOOK(6);
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTVF(2234, 54, "set_position", loc1))(loc1, ui4_1x);
		}

		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(loc1 + RTVA(2234, 58, "next_cursor", loc1));
		loc1 = (EIF_REFERENCE)RTCCL(tr1);
		RTHOOK(4);
		;
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg2
#undef arg1
}

/* cursor_search_forth */

void Fo5tmxo (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_BOOLEAN_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("cursor_search_forth", RTUD(2233), Current, 1, 2, 29941);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_cursor_not_off", EX_PRE);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (!(EIF_BOOLEAN) !tc2) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 131, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(2233, 2, dtype));

	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {

		RTHOOK(6);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 131, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 130, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			uc1 = tc2;
			uc2 = arg2;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2175, 31, "test", loc1))(loc1, uc1x, uc2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		while (!(tc1)) {
			RTHOOK(7);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 139, dtype))(Current, ur1x);
			RTHOOK(6);
			tc1 = '\01';
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 131, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			if (!tc2) {
				ur1 = RTCCL(arg1);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 130, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				uc1 = tc2;
				uc2 = arg2;
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2175, 31, "test", loc1))(loc1, uc1x, uc2x)).value.EIF_BOOLEAN_value);
				tc1 = tc2;
			}
			;
		}

	} else {

		RTHOOK(8);
		tc2 = '\01';
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 131, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (!tc3) {
			ur1 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 130, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc2 = (EIF_BOOLEAN)(tc3 == arg2);
		}
		while (!(tc2)) {
			RTHOOK(9);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 139, dtype))(Current, ur1x);
			RTHOOK(8);
			tc2 = '\01';
			ur1 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 131, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			if (!tc3) {
				ur1 = RTCCL(arg1);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 130, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				tc2 = (EIF_BOOLEAN)(tc3 == arg2);
			}
			;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg2
#undef arg1
}

/* cursor_search_back */

void Fo5t9va (EIF_REFERENCE Current, EIF_UNION arg1x, EIF_UNION arg2x)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION uc1x = {0, SK_CHAR};
#undef uc1
#define uc1 uc1x.value.EIF_CHARACTER_value
	EIF_UNION uc2x = {0, SK_CHAR};
#undef uc2
#define uc2 uc2x.value.EIF_CHARACTER_value
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	EIF_CHARACTER tc3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg2x.type == SK_REF) arg2x.value.EIF_BOOLEAN_value = * (EIF_BOOLEAN *) arg2x.value.EIF_REFERENCE_value;
#define arg2 arg2x.value.EIF_BOOLEAN_value
#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(4);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(1,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTEAA("cursor_search_back", RTUD(2233), Current, 1, 2, 29943);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_cursor_not_off", EX_PRE);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 135, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (!(EIF_BOOLEAN) !tc2) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 132, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = *(EIF_REFERENCE *)(Current + RTWA(2233, 2, dtype));

	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {

		RTHOOK(6);
		tc1 = '\01';
		ur1 = RTCCL(arg1);
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 132, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (!tc2) {
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 130, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			uc1 = tc2;
			uc2 = arg2;
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2175, 31, "test", loc1))(loc1, uc1x, uc2x)).value.EIF_BOOLEAN_value);
			tc1 = tc2;
		}
		while (!(tc1)) {
			RTHOOK(7);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 140, dtype))(Current, ur1x);
			RTHOOK(6);
			tc1 = '\01';
			ur1 = RTCCL(arg1);
			tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 132, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			if (!tc2) {
				ur1 = RTCCL(arg1);
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 130, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				uc1 = tc2;
				uc2 = arg2;
				tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION, EIF_UNION)) RTVF(2175, 31, "test", loc1))(loc1, uc1x, uc2x)).value.EIF_BOOLEAN_value);
				tc1 = tc2;
			}
			;
		}

	} else {

		RTHOOK(8);
		tc2 = '\01';
		ur1 = RTCCL(arg1);
		tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 132, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		if (!tc3) {
			ur1 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 130, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			tc2 = (EIF_BOOLEAN)(tc3 == arg2);
		}
		while (!(tc2)) {
			RTHOOK(9);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 140, dtype))(Current, ur1x);
			RTHOOK(8);
			tc2 = '\01';
			ur1 = RTCCL(arg1);
			tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 132, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
			if (!tc3) {
				ur1 = RTCCL(arg1);
				tc3 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 130, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
				tc2 = (EIF_BOOLEAN)(tc3 == arg2);
			}
			;
		}

	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg2
#undef arg1
}

/* internal_cursor */

EIF_UNION Fo5i9yq (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_REF;
	r.value.EIF_REFERENCE_value = *(EIF_REFERENCE *)(Current + RTWA(2233,125, Dtype(Current)));
	return r;
}

/* found_item */

EIF_UNION Fo4ev1y (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTEAA("found_item", RTUD(2233), Current, 0, 0, 29980);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("item_found", EX_PRE);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 69, dtype))(Current)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 120, dtype));
	ui4_1 = ti4_1;
	Result = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 84, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
}

/* remove */

void Fo4pvzi (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(1,arg1);
	RTLR(0,Current);
	RTLR(2,ur1);

	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("remove", RTUD(2233), Current, 0, 1, 29939);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2233, 121, dtype))(Current);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 90, dtype))(Current, ur1x);

	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
	if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 94, dtype))(Current, ui4_1x);
	}

	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* valid_slot */

EIF_UNION Fo4wz9c (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("valid_slot", RTUD(2233), Current, 0, 1, 29982);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("valid_i", EX_PRE);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 88, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 83, dtype));
	if ((EIF_BOOLEAN)(arg1 <= ti4_1)) {
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 87, dtype))(Current, ui4_1x)).value.EIF_INTEGER_32_value);
		ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 123, dtype))(Current)).value.EIF_INTEGER_32_value);
		Result = (EIF_BOOLEAN)(ti4_1 > ti4_2);
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* cursor_off */

EIF_UNION Fo5pray (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_UNION ur1x = {0, SK_REF};
#undef ur1
#define ur1 ur1x.value.EIF_REFERENCE_value
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER tc1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

#define arg1 arg1x.value.EIF_REFERENCE_value
	RTLI(3);
	RTLR(0,arg1);
	RTLR(2,Current);
	RTLR(1,ur1);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("cursor_off", RTUD(2233), Current, 0, 1, 29942);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	if (RTAL & CK_REQUIRE | RTAC) {
		RTHOOK(1);
		RTCT("a_cursor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_cursor_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
		RTTE(tc1, label_1);
		RTCK;
		RTJB;
	label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2234, 53, "position", arg1));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)(ti4_1 < ((EIF_INTEGER_32) 0L));
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* new_cursor */

EIF_UNION Fo4gtvt (EIF_REFERENCE Current)
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
	RTEAA("new_cursor", RTUD(2233), Current, 0, 0, 29985);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	{
		static int16 typarr [] = {2233,2234,743,-8,2,-1};
		int16 typres;

		typres = RTCID2(NULL, Dftype(Current), 2234, typarr);

		tr1 = RTLN(typres);

	}
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_UNION)) RTWF(2234, 51, Dtype(tr1)))(tr1, ur1x);
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
		tc1 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 11, dtype))(Current, ur1x)).value.EIF_BOOLEAN_value);
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

/* valid_position */

EIF_UNION Fo4wcbq (EIF_REFERENCE Current, EIF_UNION arg1x)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = (EIF_BOOLEAN) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;

	if (arg1x.type == SK_REF) arg1x.value.EIF_INTEGER_32_value = * (EIF_INTEGER_32 *) arg1x.value.EIF_REFERENCE_value;
#define arg1 arg1x.value.EIF_INTEGER_32_value
	RTLI(1);
	RTLR(0,Current);

	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTEAA("valid_position", RTUD(2233), Current, 0, 1, 29981);
	RTGC;
	RTSA(dtype);
	RTSC;
	RTIV2(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype));
	Result = (EIF_BOOLEAN)(EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)((EIF_BOOLEAN)(((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN)(arg1 <= ti4_1)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI2(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_UNION r; r.type = SK_BOOL; r.value.EIF_BOOLEAN_value = Result; return r; }
#undef arg1
}

/* no_position */

EIF_UNION Fo5hb4v (EIF_REFERENCE Current)
{
	GTCX
	EIF_UNION r;
	r.type = SK_INT32;
	r.value.EIF_INTEGER_32_value = (EIF_INTEGER_32)((EIF_INTEGER_32) 0L);
	return r;
}
void Fp1qrv6 (EIF_REFERENCE Current, int where)
{
	GTCX
	EIF_UNION ui4_1x = {0, SK_INT32};
#undef ui4_1
#define ui4_1 ui4_1x.value.EIF_INTEGER_32_value
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER tc1;
	EIF_CHARACTER tc2;
	RTCDT;
	RTLD;

	RTLI(1);
	RTLR(0,Current);

	RTIT("valid_position", Current);
	tc1 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE)) RTWF(2233, 122, dtype))(Current)).value.EIF_INTEGER_32_value);
	if (!(EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 117, dtype));
		ui4_1 = ti4_1;
		tc2 = (((FUNCTION_CAST(EIF_UNION, (EIF_REFERENCE, EIF_UNION)) RTWF(2233, 88, dtype))(Current, ui4_1x)).value.EIF_BOOLEAN_value);
		tc1 = tc2;
	}
	if (tc1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("capacity_constraint", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 66, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2233, 115, dtype));
	if ((EIF_BOOLEAN)(ti4_1 < ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
}

void EIF_Minit2234 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif


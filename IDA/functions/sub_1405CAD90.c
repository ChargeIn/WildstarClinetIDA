#include "../winhttp.h"

//----- (00000001405CAD90) ----------------------------------------------------
_QWORD* __fastcall sub_1405CAD90(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	int* v5; // rax

	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v2 = sub_14018B280(16i64, 0);
	a1[1] = v2;
	a1[2] = v2;
	a1[3] = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	a1[5] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	v3 = sub_14018B280(16i64, 0);
	a1[5] = v3;
	a1[6] = v3;
	a1[7] = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	a1[9] = 0i64;
	a1[10] = 0i64;
	a1[11] = 0i64;
	v4 = sub_14018B280(16i64, 0);
	a1[9] = v4;
	a1[10] = v4;
	a1[11] = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	a1[13] = 0i64;
	a1[14] = 0i64;
	a1[15] = 0i64;
	v5 = sub_14018B280(16i64, 0);
	a1[13] = v5;
	a1[14] = v5;
	a1[15] = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	sub_1405CACC0((__int64)a1);
	return a1;
}


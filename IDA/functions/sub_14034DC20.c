#include "../winhttp.h"

//----- (000000014034DC20) ----------------------------------------------------
__int64* __fastcall sub_14034DC20(__int64* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx

	sub_14018B900(a1[1], 0);
	v2 = (_QWORD*)a1[2];
	if (v2)
		*v2 = a1[3];
	v3 = a1[3];
	if (v3)
		*(_QWORD*)(v3 + 16) = a1[2];
	a1[2] = 0i64;
	a1[3] = 0i64;
	sub_14018B900((__int64)a1, 0);
	return a1;
}


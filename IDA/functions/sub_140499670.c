#include "../winhttp.h"

//----- (0000000140499670) ----------------------------------------------------
_QWORD* __fastcall sub_140499670(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax

	sub_140499790(a1);
	*a1 = off_140B67720;
	v2 = sub_14018B280(48i64, 0);
	a1[22] = v2;
	a1[23] = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[22] + 8i64) = 0i64;
	*(_QWORD*)(a1[22] + 16i64) = a1[22];
	*(_QWORD*)(a1[22] + 24i64) = a1[22];
	v3 = sub_14018B280(72i64, 0);
	a1[27] = 0i64;
	a1[26] = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(a1[26] + 8i64) = 0i64;
	*(_QWORD*)(a1[26] + 16i64) = a1[26];
	*(_QWORD*)(a1[26] + 24i64) = a1[26];
	v4 = sub_14018B280(48i64, 0);
	a1[31] = 0i64;
	a1[30] = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(a1[30] + 8i64) = 0i64;
	*(_QWORD*)(a1[30] + 16i64) = a1[30];
	*(_QWORD*)(a1[30] + 24i64) = a1[30];
	return a1;
}
// 140B67720: using guessed type __int64 (__fastcall *off_140B67720[7])();


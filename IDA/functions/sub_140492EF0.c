#include "../winhttp.h"

//----- (0000000140492EF0) ----------------------------------------------------
_QWORD* __fastcall sub_140492EF0(_QWORD* a1, __int64 a2, __int64 a3)
{
	int* v6; // rax

	*a1 = off_140B67230;
	a1[2] = 0i64;
	a1[1] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	a1[8] = 0i64;
	v6 = sub_14018B280(48i64, 0);
	a1[11] = 0i64;
	a1[10] = v6;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(a1[10] + 8i64) = 0i64;
	*(_QWORD*)(a1[10] + 16i64) = a1[10];
	*(_QWORD*)(a1[10] + 24i64) = a1[10];
	a1[3] = a2;
	a1[4] = a3;
	return a1;
}
// 140B67230: using guessed type __int64 (__fastcall *off_140B67230[11])();


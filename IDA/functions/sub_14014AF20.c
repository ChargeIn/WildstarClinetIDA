#include "../winhttp.h"

//----- (000000014014AF20) ----------------------------------------------------
__int64 __fastcall sub_14014AF20(__int64 a1)
{
	int v2; // eax
	_DWORD* v3; // r8
	bool v4; // zf
	__int64 result; // rax

	v2 = sub_14014AE00(a1, 1);
	v3 = *(_DWORD**)(a1 + 16);
	v4 = v2 == 0;
	v3[2] = 1;
	result = 1i64;
	*v3 = !v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}


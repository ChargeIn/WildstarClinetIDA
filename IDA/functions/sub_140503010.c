#include "../winhttp.h"

//----- (0000000140503010) ----------------------------------------------------
__int64 __fastcall sub_140503010(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	__int64 result; // rax
	_DWORD* v5; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_DWORD*)(v2 + 8) == 15 && *(_DWORD*)(v2 + 16))
	{
		v3 = (_DWORD*)a1[2];
		result = 1i64;
		*v3 = 1;
		v3[2] = 1;
		a1[2] += 16i64;
	}
	else
	{
		v5 = (_DWORD*)a1[2];
		*v5 = 0;
		v5[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}


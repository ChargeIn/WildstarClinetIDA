#include "../winhttp.h"

//----- (00000001406D6BF0) ----------------------------------------------------
__int64 __fastcall sub_1406D6BF0(_QWORD* a1)
{
	_DWORD* v2; // rdx
	_DWORD* v4; // rax
	_DWORD* v5; // rax
	_DWORD* v6; // rax

	if (sub_1406D5FA0(a1))
	{
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			sub_140056D60(a1, 2u);
		v5 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v5 < a1[2] && v5 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
			sub_140056D60(a1, 3u);
		v6 = (_DWORD*)a1[2];
		*v6 = 0;
		v6[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v2 = (_DWORD*)a1[2];
		*v2 = 0;
		v2[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];


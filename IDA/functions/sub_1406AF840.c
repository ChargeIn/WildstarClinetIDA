#include "../winhttp.h"

//----- (00000001406AF840) ----------------------------------------------------
__int64 __fastcall sub_1406AF840(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	_DWORD* v6; // rdx
	bool v7; // zf
	__int64 result; // rax
	_DWORD* v9; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& qword_140C659F0
		&& ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			v5))
	{
		v6 = (_DWORD*)a1[2];
		v7 = *(_DWORD*)(v5 + 304) == 0;
		v6[2] = 1;
		result = 1i64;
		*v6 = !v7;
		a1[2] += 16i64;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 1;
		v9[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1406AF872: variable 'v3' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;


#include "../winhttp.h"

//----- (0000000140654740) ----------------------------------------------------
__int64 __fastcall sub_140654740(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 result; // rax
	float v9; // xmm0_4
	__int64 v10; // r9

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		return 0i64;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	v4 = v3;
	if (!v3)
		return 0i64;
	v5 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v3 + 5632));
	if (v5
		|| *(_QWORD*)(qword_140C65898 + 120) == v4
		&& (v6 = sub_14039DF50(qword_140C65898)) != 0
		&& (v5 = sub_1404695E0(v6)) != 0)
	{
		v9 = sub_14053DA10(v5);
		*(_DWORD*)(v10 + 8) = 3;
		result = 1i64;
		*(double*)v10 = (double)(int)v9;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v7 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v7 = 0i64;
		*(_DWORD*)(v7 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 1406547E8: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;


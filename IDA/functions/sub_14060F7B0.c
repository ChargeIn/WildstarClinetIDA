#include "../winhttp.h"

//----- (000000014060F7B0) ----------------------------------------------------
void __fastcall sub_14060F7B0(__int64 a1)
{
	_QWORD* v2; // rdi
	__int64 v3; // rdx
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // eax
	int v7; // edx
	unsigned int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rax
	int v11; // edx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	__int64 v19; // rcx
	__int64 v20; // rdx
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v22; // [rsp+28h] [rbp-20h]
	_QWORD* v23; // [rsp+30h] [rbp-18h]
	__int64 v24; // [rsp+38h] [rbp-10h]

	LODWORD(v24) = 1;
	v2 = *(_QWORD**)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v21 = off_140B569F0;
	v3 = v2[4];
	v23 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0((__int64)v2);
	v4 = v2[2];
	v5 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v2[2] += 16i64;
	v6 = sub_1400578C0((__int64)v2);
	v7 = *(_DWORD*)(a1 + 8);
	v8 = v6;
	LODWORD(v22) = v6;
	if ((unsigned int)sub_140649870(v2, v7))
	{
		sub_1400FB540((__int64)&v21);
		v2[2] -= 16i64;
	}
	v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 8));
	if (v9)
	{
		v10 = sub_14047DCA0(v9);
		if (v10)
		{
			v11 = *(_DWORD*)(v10 + 8);
			if (v11 != *(_DWORD*)(a1 + 8))
			{
				if ((unsigned int)sub_140649870(v2, v11))
				{
					sub_1400FB540((__int64)&v21);
					v2[2] -= 16i64;
				}
			}
		}
	}
	v12 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v8);
	v13 = v2[2];
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v13, L"eStatType", v14);
	v2[2] -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v8);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v17, L"nStreakAmount", v18);
	v19 = qword_140C65898;
	v2[2] -= 16i64;
	Apollo_LUAEvent(*(_QWORD*)(v19 + 29504), "CombatLogKillStreak", "T", v8, v21, v22, v23, v24);
	sub_1400579E0((__int64)v2, v20, v8);
}
// 14060F8DC: variable 'v14' is possibly undefined
// 14060F90D: variable 'v16' is possibly undefined
// 14060F91F: variable 'v17' is possibly undefined
// 14060F91F: variable 'v18' is possibly undefined
// 14060F962: variable 'v20' is possibly undefined
// 140B26D10: using guessed type wchar_t aNstreakamount[14];
// 140B26D68: using guessed type wchar_t aEstattype[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;


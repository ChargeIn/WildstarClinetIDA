#include "../winhttp.h"

//----- (0000000140511690) ----------------------------------------------------
__int64 __fastcall sub_140511690(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	int* v4; // rsi
	int i; // ebp
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int16* v11; // rax
	__int64 v12; // rdx
	int v13; // r14d
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v4 = dword_140C38A60;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	for (i = 0; (unsigned int)i < 0xB; ++i)
	{
		if (*v4)
		{
			v6 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v6 + 8) = 3;
			*(double*)v6 = (double)i;
			v7 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) += 16i64;
			if (*(_QWORD*)(v7 + 120) >= *(_QWORD*)(v7 + 112))
				sub_14005E2C0(a1);
			v8 = *(_QWORD*)(a1 + 16);
			v9 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v8 + 8) = 5;
			*(_QWORD*)v8 = v9;
			*(_QWORD*)(a1 + 16) += 16i64;
			v11 = sub_14034BDD0(v10, v4[1]);
			sub_1400F0090(a1, v12, (unsigned __int64*)"name", (unsigned __int16*)v11);
			v13 = *v4;
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v14 = *(_QWORD*)(a1 + 16);
			v15 = sub_140062650(a1, (unsigned __int64*)"format", 6ui64);
			*(_DWORD*)(v14 + 8) = 4;
			*(_QWORD*)v14 = v15;
			*(_QWORD*)(a1 + 16) += 16i64;
			v16 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v16 + 8) = 3;
			*(double*)v16 = (double)v13;
			*(_QWORD*)(a1 + 16) += 16i64;
			v17 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v17, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
		}
		v4 += 2;
	}
	return 1i64;
}
// 14051174E: variable 'v10' is possibly undefined
// 140511760: variable 'v12' is possibly undefined
// 140C38A60: using guessed type _DWORD dword_140C38A60[22];


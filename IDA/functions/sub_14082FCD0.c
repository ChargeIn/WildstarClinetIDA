#include "../winhttp.h"

//----- (000000014082FCD0) ----------------------------------------------------
char __fastcall sub_14082FCD0(__int64* a1, int a2)
{
	__int64 v3; // rbp
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // rsi
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // rcx

	v3 = (unsigned int)(a2 + *((_DWORD*)a1 + 4));
	v4 = sub_1408819F0(dword_140C10F20, 24 * v3);
	v5 = v4;
	if (v4)
	{
		v6 = (a1[1] - *a1) / 24;
		v7 = (unsigned int)v6;
		if (*a1)
		{
			if ((_DWORD)v6)
			{
				v8 = 0i64;
				v9 = (unsigned int)v7;
				do
				{
					v10 = *a1;
					v8 += 24i64;
					*(_QWORD*)(v8 + v4 - 24) = *(_QWORD*)(*a1 + v8 - 24);
					*(_QWORD*)(v8 + v4 - 16) = *(_QWORD*)(v10 + v8 - 16);
					*(_QWORD*)(v8 + v4 - 8) = *(_QWORD*)(v10 + v8 - 8);
					--v9;
				} while (v9);
			}
			sub_140881720(dword_140C10F20, *a1);
		}
		*((_DWORD*)a1 + 4) = v3;
		*a1 = v5;
		a1[1] = v5 + 24 * v7;
		LOBYTE(v4) = 1;
	}
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;


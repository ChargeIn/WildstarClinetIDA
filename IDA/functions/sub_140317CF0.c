#include "../winhttp.h"

//----- (0000000140317CF0) ----------------------------------------------------
void __fastcall sub_140317CF0(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rdx
	int* v6; // rsi
	unsigned __int64 v7; // r8
	__int64 v8; // rcx

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 28i64);
		v6 = v4;
		if ((int*)*a1 != v4)
		{
			v7 = 0i64;
			if (a1[1])
			{
				v5 = v4 + 2;
				do
				{
					if (v5 != (int*)8)
					{
						v8 = (__int64)v5 + *a1 - (_QWORD)v4 - 8;
						*(v5 - 2) = *(_DWORD*)v8;
						*(v5 - 1) = *(_DWORD*)(v8 + 4);
						*v5 = *(_DWORD*)(v8 + 8);
						v5[1] = *(_DWORD*)(v8 + 12);
						*((_WORD*)v5 + 4) = *(_WORD*)(v8 + 16);
						*((_WORD*)v5 + 5) = *(_WORD*)(v8 + 18);
						*((_WORD*)v5 + 6) = *(_WORD*)(v8 + 20);
						*((_WORD*)v5 + 7) = *(_WORD*)(v8 + 22);
						*((_WORD*)v5 + 8) = *(_WORD*)(v8 + 24);
						*((_WORD*)v5 + 9) = *(_WORD*)(v8 + 26);
					}
					++v7;
					v5 += 7;
				} while (v7 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v5);
			*a1 = (__int64)v6;
		}
		a1[1] = a2;
	}
}
// 140317DB3: variable 'v5' is possibly undefined


#include "../winhttp.h"

//----- (00000001403D2FC0) ----------------------------------------------------
void __fastcall sub_1403D2FC0(__int64* a1)
{
	int* v2; // rax
	int* v3; // rdi

	if (a1[1])
	{
		a1[1] = 0i64;
	}
	else
	{
		v2 = sub_14018DB00(*a1, 0i64, 256i64);
		v3 = v2;
		if ((int*)*a1 != v2)
		{
			sub_1407DB590(v2, (int*)*a1, a1[1] << 8);
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v3;
		}
		a1[1] = 0i64;
	}
}


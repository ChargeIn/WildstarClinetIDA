#include "../winhttp.h"

//----- (00000001407D82D0) ----------------------------------------------------
void __fastcall sub_1407D82D0(__int64* a1, unsigned __int64 a2)
{
	int* v4; // rax
	int* v5; // rsi

	if (a1[1] > a2)
	{
		a1[1] = a2;
	}
	else
	{
		v4 = sub_14018DB00(*a1, a2, 112i64);
		v5 = v4;
		if ((int*)*a1 != v4)
		{
			sub_1407DB590(v4, (int*)*a1, 112 * a1[1]);
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v5;
		}
		a1[1] = a2;
	}
}


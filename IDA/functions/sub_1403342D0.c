#include "../winhttp.h"

//----- (00000001403342D0) ----------------------------------------------------
__int64 __fastcall sub_1403342D0(__int64* a1, _WORD* a2)
{
	__int64 v2; // rsi
	int* v5; // r14

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 2i64);
	*((_WORD*)v5 + v2) = *a2;
	if ((int*)*a1 != v5)
	{
		sub_1407DB590(v5, (int*)*a1, 2 * a1[1]);
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	a1[1] = v2 + 1;
	return v2;
}


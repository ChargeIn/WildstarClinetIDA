#include "../winhttp.h"

//----- (00000001401C3160) ----------------------------------------------------
int* __fastcall sub_1401C3160(__int64* a1, unsigned __int64 a2)
{
	int* result; // rax
	int* v4; // rdi

	if (a1[1] > a2)
		a1[1] = a2;
	result = sub_14018DBC0(*a1, a2, 20i64);
	v4 = result;
	if ((int*)*a1 != result)
	{
		result = sub_1407DB590(result, (int*)*a1, 20 * a1[1]);
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v4;
	}
	return result;
}


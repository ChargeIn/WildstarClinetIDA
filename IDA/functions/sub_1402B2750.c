#include "../winhttp.h"

//----- (00000001402B2750) ----------------------------------------------------
__int64 __fastcall sub_1402B2750(__int64* a1, __int64 a2)
{
	__int64 v5; // rcx
	int* v6; // rax

	if (!a2)
		return 2147942487i64;
	v5 = *a1;
	if (v5)
	{
		sub_14018B900(v5, 0);
		*a1 = 0i64;
	}
	a1[1] = 0i64;
	v6 = sub_14018B280(a2, 1u);
	*a1 = (__int64)v6;
	if (v6)
	{
		a1[1] = a2;
		return 0i64;
	}
	else
	{
		a1[1] = 0i64;
		return 2147942414i64;
	}
}


#include "../winhttp.h"

//----- (00000001405A7870) ----------------------------------------------------
void __fastcall sub_1405A7870(__int64* a1)
{
	__int64 v2; // rcx

	sub_1403FC230(a1 + 12);
	v2 = a1[14];
	if (v2)
		sub_14018B900(v2, 0);
	sub_140008410((__int64)(a1 + 8));
	sub_14018B900(a1[9], 0);
	sub_140008410((__int64)(a1 + 4));
	sub_14018B900(a1[5], 0);
	if (a1[2])
	{
		sub_1405A9660((__int64)a1, *(_QWORD**)(a1[1] + 8));
		*(_QWORD*)(a1[1] + 16) = a1[1];
		*(_QWORD*)(a1[1] + 8) = 0i64;
		*(_QWORD*)(a1[1] + 24) = a1[1];
		a1[2] = 0i64;
	}
	sub_14018B900(a1[1], 0);
}


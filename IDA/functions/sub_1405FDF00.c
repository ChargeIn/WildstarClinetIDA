#include "../winhttp.h"

//----- (00000001405FDF00) ----------------------------------------------------
void __fastcall sub_1405FDF00(__int64* a1)
{
	if (a1[14])
	{
		sub_14001A270((__int64)(a1 + 12), *(_QWORD**)(a1[13] + 8));
		*(_QWORD*)(a1[13] + 16) = a1[13];
		*(_QWORD*)(a1[13] + 8) = 0i64;
		*(_QWORD*)(a1[13] + 24) = a1[13];
		a1[14] = 0i64;
	}
	sub_14018B900(a1[13], 0);
	sub_140008410((__int64)(a1 + 8));
	sub_14018B900(a1[9], 0);
	sub_140008410((__int64)(a1 + 4));
	sub_14018B900(a1[5], 0);
	if (a1[2])
	{
		sub_14001A270((__int64)a1, *(_QWORD**)(a1[1] + 8));
		*(_QWORD*)(a1[1] + 16) = a1[1];
		*(_QWORD*)(a1[1] + 8) = 0i64;
		*(_QWORD*)(a1[1] + 24) = a1[1];
		a1[2] = 0i64;
	}
	sub_14018B900(a1[1], 0);
}


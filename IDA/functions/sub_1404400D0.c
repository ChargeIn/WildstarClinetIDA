#include "../winhttp.h"

//----- (00000001404400D0) ----------------------------------------------------
void __fastcall sub_1404400D0(__int64* a1)
{
	_QWORD** v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx

	sub_140008410((__int64)(a1 + 6));
	sub_14018B900(a1[7], 0);
	if (a1[4])
	{
		sub_14001EA50((__int64)(a1 + 2), *(_QWORD**)(a1[3] + 8));
		*(_QWORD*)(a1[3] + 16) = a1[3];
		*(_QWORD*)(a1[3] + 8) = 0i64;
		*(_QWORD*)(a1[3] + 24) = a1[3];
		a1[4] = 0i64;
	}
	sub_14018B900(a1[3], 0);
	v2 = (_QWORD**)a1[1];
	v3 = *v2;
	if (*v2 != v2)
	{
		do
		{
			v4 = (__int64)v3;
			v3 = (_QWORD*)*v3;
			sub_14018B900(v4, 0);
		} while (v3 != (_QWORD*)a1[1]);
	}
	*(_QWORD*)a1[1] = a1[1];
	*(_QWORD*)(a1[1] + 8) = a1[1];
	sub_14018B900(a1[1], 0);
}


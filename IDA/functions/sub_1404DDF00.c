#include "../winhttp.h"

//----- (00000001404DDF00) ----------------------------------------------------
_QWORD* __fastcall sub_1404DDF00(_QWORD* a1, char a2)
{
	__int64 v3; // rcx

	v3 = a1[24];
	if (v3)
		sub_14018B900(v3, 0);
	sub_1400B7390(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}


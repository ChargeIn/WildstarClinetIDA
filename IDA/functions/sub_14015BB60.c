#include "../winhttp.h"

//----- (000000014015BB60) ----------------------------------------------------
_QWORD* __fastcall sub_14015BB60(_QWORD* a1, __int64 a2)
{
	char v2; // bl

	v2 = a2;
	sub_14015BBA0(a1, a2);
	if ((v2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}


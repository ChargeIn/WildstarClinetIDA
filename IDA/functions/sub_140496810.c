#include "../winhttp.h"

//----- (0000000140496810) ----------------------------------------------------
_QWORD* __fastcall sub_140496810(_QWORD* a1, char a2)
{
	sub_140008410((__int64)(a1 + 26));
	sub_14018B900(a1[27], 0);
	sub_140496FA0(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}


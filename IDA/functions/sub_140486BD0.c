#include "../winhttp.h"

//----- (0000000140486BD0) ----------------------------------------------------
_QWORD* __fastcall sub_140486BD0(_QWORD* a1, char a2)
{
	*a1 = off_140B67170;
	sub_140485C30(a1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B67170: using guessed type __int64 (__fastcall *off_140B67170[6])();


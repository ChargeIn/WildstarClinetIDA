#include "../winhttp.h"

//----- (0000000140104090) ----------------------------------------------------
_QWORD* __fastcall sub_140104090(_QWORD* a1, char a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B56C50;
	sub_140104100((__int64)a1);
	v4 = a1[8];
	if (v4)
		sub_14018B900(v4, 0);
	v5 = a1[4];
	if (v5)
		sub_14018B900(v5, 0);
	*a1 = off_140B55048;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B56C50: using guessed type __int64 (__fastcall *off_140B56C50[9])();


#include "../winhttp.h"

//----- (0000000140556620) ----------------------------------------------------
_QWORD* __fastcall sub_140556620(_QWORD* a1, char a2)
{
	__int64 v3; // rcx

	v3 = a1[4];
	if (v3)
		sub_14018B900(v3, 0);
	*a1 = off_140B55048;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();


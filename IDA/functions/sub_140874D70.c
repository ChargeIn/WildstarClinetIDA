#include "../winhttp.h"

//----- (0000000140874D70) ----------------------------------------------------
_QWORD* __fastcall sub_140874D70(_QWORD* a1, char a2)
{
	*a1 = off_1409A6530;
	sub_140876CE0((__int64)a1);
	if ((a2 & 1) != 0)
		sub_140001E60((__int64)a1);
	return a1;
}
// 1409A6530: using guessed type __int64 (__fastcall *off_1409A6530[6])();


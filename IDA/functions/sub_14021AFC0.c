#include "../winhttp.h"

//----- (000000014021AFC0) ----------------------------------------------------
__int64 __fastcall sub_14021AFC0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BA20, a1, qword_140C63858);
	if (dword_140C640B0 || (int)sub_14021AD60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63EE8 + 24i64))(qword_140C63EE8, a1);
}
// 140A6BA20: using guessed type wchar_t *off_140A6BA20[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63EE8: using guessed type __int64 qword_140C63EE8;
// 140C640B0: using guessed type int dword_140C640B0;


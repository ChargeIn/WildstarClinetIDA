#include "../winhttp.h"

//----- (0000000140207540) ----------------------------------------------------
__int64 __fastcall sub_140207540(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A9F0, a1, qword_140C63858);
	if (dword_140C643E0 || (int)sub_140207280() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64488 + 32i64))(qword_140C64488, a1);
}
// 140A6A9F0: using guessed type wchar_t *off_140A6A9F0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C643E0: using guessed type int dword_140C643E0;
// 140C64488: using guessed type __int64 qword_140C64488;


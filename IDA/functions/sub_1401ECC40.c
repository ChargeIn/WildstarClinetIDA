#include "../winhttp.h"

//----- (00000001401ECC40) ----------------------------------------------------
__int64 __fastcall sub_1401ECC40(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69410, a1, qword_140C63858);
	if (dword_140C650B4 || (int)sub_1401EC980() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64650 + 32i64))(qword_140C64650, a1);
}
// 140A69410: using guessed type wchar_t *off_140A69410[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64650: using guessed type __int64 qword_140C64650;
// 140C650B4: using guessed type int dword_140C650B4;


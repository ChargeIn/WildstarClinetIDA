#include "../winhttp.h"

//----- (00000001401EF280) ----------------------------------------------------
__int64 __fastcall sub_1401EF280(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69608, a1, qword_140C63858);
	if (dword_140C64470 || (int)sub_1401EEFC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C645B8 + 32i64))(qword_140C645B8, a1);
}
// 140A69608: using guessed type wchar_t *off_140A69608[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64470: using guessed type int dword_140C64470;
// 140C645B8: using guessed type __int64 qword_140C645B8;


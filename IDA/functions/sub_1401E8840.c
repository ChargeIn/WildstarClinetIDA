#include "../winhttp.h"

//----- (00000001401E8840) ----------------------------------------------------
__int64 __fastcall sub_1401E8840(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69090, a1, qword_140C63858);
	if (dword_140C64F2C || (int)sub_1401E8580() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A98 + 32i64))(qword_140C64A98, a1);
}
// 140A69090: using guessed type wchar_t *off_140A69090[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A98: using guessed type __int64 qword_140C64A98;
// 140C64F2C: using guessed type int dword_140C64F2C;


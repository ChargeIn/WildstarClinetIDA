#include "../winhttp.h"

//----- (00000001401E9500) ----------------------------------------------------
__int64 __fastcall sub_1401E9500(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69138, a1, qword_140C63858);
	if (dword_140C64944 || (int)sub_1401E9240() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64218 + 32i64))(qword_140C64218, a1);
}
// 140A69138: using guessed type wchar_t *off_140A69138[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64218: using guessed type __int64 qword_140C64218;
// 140C64944: using guessed type int dword_140C64944;


#include "../winhttp.h"

//----- (00000001402045D0) ----------------------------------------------------
__int64 sub_1402045D0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6A788, qword_140C63858);
	if (dword_140C64DB4 || (int)sub_1402043C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63998 + 40i64))(qword_140C63998);
}
// 140A6A788: using guessed type wchar_t *off_140A6A788[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63998: using guessed type __int64 qword_140C63998;
// 140C64DB4: using guessed type int dword_140C64DB4;


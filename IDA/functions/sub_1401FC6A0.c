#include "../winhttp.h"

//----- (00000001401FC6A0) ----------------------------------------------------
__int64 __fastcall sub_1401FC6A0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A0F8, a1, qword_140C63858);
	if (dword_140C64594 || (int)sub_1401FC440() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63948 + 24i64))(qword_140C63948, a1);
}
// 140A6A0F8: using guessed type wchar_t *off_140A6A0F8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63948: using guessed type __int64 qword_140C63948;
// 140C64594: using guessed type int dword_140C64594;


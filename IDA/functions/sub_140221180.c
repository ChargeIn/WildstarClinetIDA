#include "../winhttp.h"

//----- (0000000140221180) ----------------------------------------------------
__int64 __fastcall sub_140221180(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BF28, a1, qword_140C63858);
	if (dword_140C64800 || (int)sub_140220F20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A20 + 24i64))(qword_140C64A20, a1);
}
// 140A6BF28: using guessed type wchar_t *off_140A6BF28[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64800: using guessed type int dword_140C64800;
// 140C64A20: using guessed type __int64 qword_140C64A20;


#include "../winhttp.h"

//----- (0000000140228CC0) ----------------------------------------------------
__int64 __fastcall sub_140228CC0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C580, a1, qword_140C63858);
	if (dword_140C6470C || (int)sub_140228A60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65378 + 24i64))(qword_140C65378, a1);
}
// 140A6C580: using guessed type wchar_t *off_140A6C580[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6470C: using guessed type int dword_140C6470C;
// 140C65378: using guessed type __int64 qword_140C65378;


#include "../winhttp.h"

//----- (0000000140213D60) ----------------------------------------------------
__int64 __fastcall sub_140213D60(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B438, a1, qword_140C63858);
	if (dword_140C63900 || (int)sub_140213AA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C645E8 + 32i64))(qword_140C645E8, a1);
}
// 140A6B438: using guessed type wchar_t *off_140A6B438[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63900: using guessed type int dword_140C63900;
// 140C645E8: using guessed type __int64 qword_140C645E8;


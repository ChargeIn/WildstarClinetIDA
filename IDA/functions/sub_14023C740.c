#include "../winhttp.h"

//----- (000000014023C740) ----------------------------------------------------
__int64 __fastcall sub_14023C740(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6D5B0, a1, qword_140C63858);
	if (dword_140C65130 || (int)sub_14023C4E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BD8 + 24i64))(qword_140C63BD8, a1);
}
// 140A6D5B0: using guessed type wchar_t *off_140A6D5B0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BD8: using guessed type __int64 qword_140C63BD8;
// 140C65130: using guessed type int dword_140C65130;


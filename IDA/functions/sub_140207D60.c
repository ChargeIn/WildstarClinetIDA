#include "../winhttp.h"

//----- (0000000140207D60) ----------------------------------------------------
__int64 __fastcall sub_140207D60(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AA60, a1, qword_140C63858);
	if (dword_140C63A64 || (int)sub_140207B00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E68 + 24i64))(qword_140C63E68, a1);
}
// 140A6AA60: using guessed type wchar_t *off_140A6AA60[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A64: using guessed type int dword_140C63A64;
// 140C63E68: using guessed type __int64 qword_140C63E68;


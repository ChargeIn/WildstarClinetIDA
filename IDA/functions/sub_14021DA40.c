#include "../winhttp.h"

//----- (000000014021DA40) ----------------------------------------------------
__int64 __fastcall sub_14021DA40(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BC50, a1, qword_140C63858);
	if (dword_140C653E4 || (int)sub_14021D7E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BF8 + 24i64))(qword_140C63BF8, a1);
}
// 140A6BC50: using guessed type wchar_t *off_140A6BC50[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BF8: using guessed type __int64 qword_140C63BF8;
// 140C653E4: using guessed type int dword_140C653E4;


#include "../winhttp.h"

//----- (000000014023D840) ----------------------------------------------------
__int64 __fastcall sub_14023D840(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6D690, a1, qword_140C63858);
	if (dword_140C64A68 || (int)sub_14023D5E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65368 + 24i64))(qword_140C65368, a1);
}
// 140A6D690: using guessed type wchar_t *off_140A6D690[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A68: using guessed type int dword_140C64A68;
// 140C65368: using guessed type __int64 qword_140C65368;


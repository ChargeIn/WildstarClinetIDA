#include "../winhttp.h"

//----- (000000014020C160) ----------------------------------------------------
__int64 __fastcall sub_14020C160(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6ADE0, a1, qword_140C63858);
	if (dword_140C64590 || (int)sub_14020BF00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65498 + 24i64))(qword_140C65498, a1);
}
// 140A6ADE0: using guessed type wchar_t *off_140A6ADE0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64590: using guessed type int dword_140C64590;
// 140C65498: using guessed type __int64 qword_140C65498;


#include "../winhttp.h"

//----- (0000000140210A60) ----------------------------------------------------
__int64 __fastcall sub_140210A60(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B198, a1, qword_140C63858);
	if (dword_140C639D0 || (int)sub_1402107A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B68 + 32i64))(qword_140C63B68, a1);
}
// 140A6B198: using guessed type wchar_t *off_140A6B198[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639D0: using guessed type int dword_140C639D0;
// 140C63B68: using guessed type __int64 qword_140C63B68;


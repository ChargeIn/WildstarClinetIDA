#include "../winhttp.h"

//----- (000000014020DF20) ----------------------------------------------------
__int64 __fastcall sub_14020DF20(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AF68, a1, qword_140C63858);
	if (dword_140C655A0 || (int)sub_14020DCC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E18 + 24i64))(qword_140C63E18, a1);
}
// 140A6AF68: using guessed type wchar_t *off_140A6AF68[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E18: using guessed type __int64 qword_140C63E18;
// 140C655A0: using guessed type int dword_140C655A0;


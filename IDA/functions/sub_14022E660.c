#include "../winhttp.h"

//----- (000000014022E660) ----------------------------------------------------
__int64 __fastcall sub_14022E660(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CA18, a1, qword_140C63858);
	if (dword_140C63DAC || (int)sub_14022E3A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C655E0 + 32i64))(qword_140C655E0, a1);
}
// 140A6CA18: using guessed type wchar_t *off_140A6CA18[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DAC: using guessed type int dword_140C63DAC;
// 140C655E0: using guessed type __int64 qword_140C655E0;


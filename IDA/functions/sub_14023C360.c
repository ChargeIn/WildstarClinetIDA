#include "../winhttp.h"

//----- (000000014023C360) ----------------------------------------------------
__int64 __fastcall sub_14023C360(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6D578, a1, qword_140C63858);
	if (dword_140C654A0 || (int)sub_14023C0A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A88 + 32i64))(qword_140C63A88, a1);
}
// 140A6D578: using guessed type wchar_t *off_140A6D578[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A88: using guessed type __int64 qword_140C63A88;
// 140C654A0: using guessed type int dword_140C654A0;


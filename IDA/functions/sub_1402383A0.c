#include "../winhttp.h"

//----- (00000001402383A0) ----------------------------------------------------
__int64 __fastcall sub_1402383A0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6D230, a1, qword_140C63858);
	if (dword_140C6428C || (int)sub_1402380E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65328 + 32i64))(qword_140C65328, a1);
}
// 140A6D230: using guessed type wchar_t *off_140A6D230[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6428C: using guessed type int dword_140C6428C;
// 140C65328: using guessed type __int64 qword_140C65328;


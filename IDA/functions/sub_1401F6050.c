#include "../winhttp.h"

//----- (00000001401F6050) ----------------------------------------------------
__int64 sub_1401F6050()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A69BB8, qword_140C63858);
	if (dword_140C64F08 || (int)sub_1401F5E40() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64260 + 40i64))(qword_140C64260);
}
// 140A69BB8: using guessed type wchar_t *off_140A69BB8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64260: using guessed type __int64 qword_140C64260;
// 140C64F08: using guessed type int dword_140C64F08;


#include "../winhttp.h"

//----- (00000001401F13D0) ----------------------------------------------------
__int64 sub_1401F13D0()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A697C8, qword_140C63858);
	if (dword_140C64FA4 || (int)sub_1401F11C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64FD0 + 40i64))(qword_140C64FD0);
}
// 140A697C8: using guessed type wchar_t *off_140A697C8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64FA4: using guessed type int dword_140C64FA4;
// 140C64FD0: using guessed type __int64 qword_140C64FD0;


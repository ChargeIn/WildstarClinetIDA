#include "../winhttp.h"

//----- (00000001401EB650) ----------------------------------------------------
__int64 sub_1401EB650()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A692F8, qword_140C63858);
	if (dword_140C64E08 || (int)sub_1401EB440() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D68 + 40i64))(qword_140C63D68);
}
// 140A692F8: using guessed type wchar_t *off_140A692F8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D68: using guessed type __int64 qword_140C63D68;
// 140C64E08: using guessed type int dword_140C64E08;


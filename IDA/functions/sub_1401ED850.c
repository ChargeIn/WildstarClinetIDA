#include "../winhttp.h"

//----- (00000001401ED850) ----------------------------------------------------
__int64 sub_1401ED850()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A694B8, qword_140C63858);
	if (dword_140C653CC || (int)sub_1401ED640() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65410 + 40i64))(qword_140C65410);
}
// 140A694B8: using guessed type wchar_t *off_140A694B8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C653CC: using guessed type int dword_140C653CC;
// 140C65410: using guessed type __int64 qword_140C65410;


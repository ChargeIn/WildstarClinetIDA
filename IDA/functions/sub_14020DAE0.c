#include "../winhttp.h"

//----- (000000014020DAE0) ----------------------------------------------------
__int64 __fastcall sub_14020DAE0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AF30, a1, qword_140C63858);
	if (dword_140C63AAC || (int)sub_14020D880() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A68 + 24i64))(qword_140C63A68, a1);
}
// 140A6AF30: using guessed type wchar_t *off_140A6AF30[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A68: using guessed type __int64 qword_140C63A68;
// 140C63AAC: using guessed type int dword_140C63AAC;


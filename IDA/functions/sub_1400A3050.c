#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A3050) ----------------------------------------------------
__int64 __fastcall sub_1400A3050(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_140336A40(a1, a2, (_QWORD*)a3);
	if ((int)result >= 0)
		return sub_14006C090(a1, (_DWORD*)(a3 + 8), 5ui64);
	return result;
}


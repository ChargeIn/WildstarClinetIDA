#include "../winhttp.h"

//----- (000000014007ADD0) ----------------------------------------------------
__int64 __fastcall sub_14007ADD0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
		return sub_140337160(a1, (_BYTE*)(a3 + 4), 16i64);
	return result;
}


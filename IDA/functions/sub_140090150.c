#include "../winhttp.h"

//----- (0000000140090150) ----------------------------------------------------
__int64 __fastcall sub_140090150(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 4ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v6);
		if ((int)result >= 0)
			return sub_14006C120(a1, (__int64*)(a3 + 16), v7);
	}
	return result;
}
// 14009018E: variable 'v6' is possibly undefined
// 14009019E: variable 'v7' is possibly undefined


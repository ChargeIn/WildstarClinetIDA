#include "../winhttp.h"

//----- (000000014009CB30) ----------------------------------------------------
__int64 __fastcall sub_14009CB30(__int64 a1, _QWORD* a2, unsigned __int16* a3)
{
	int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned __int16 i; // bx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006BF60(a1, a3, 0x10ui64);
	if (v7 >= 0)
	{
		v8 = sub_1403374E0(a2, 32i64 * *a3);
		*((_QWORD*)a3 + 1) = v8;
		if (!v8)
			return 2147500037i64;
		for (i = 0; i < *a3; ++i)
		{
			v7 = sub_14009CA90(a1, v9, *((_QWORD*)a3 + 1) + 32i64 * i);
			if (v7 < 0)
				break;
		}
	}
	return (unsigned int)v7;
}
// 14009CBB0: variable 'v9' is possibly undefined


#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A4430) ----------------------------------------------------
__int64 __fastcall sub_1400A4430(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	int v7; // esi
	__int64 v8; // rax
	unsigned int i; // ebx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, a3, 0x20ui64);
	if (v7 >= 0)
	{
		v8 = sub_1403374E0(a2, 68i64 * *a3);
		*((_QWORD*)a3 + 1) = v8;
		if (!v8)
			return 2147500037i64;
		for (i = 0; i < *a3; ++i)
		{
			v7 = sub_1400A4390(a1, (__int64)a2, *((_QWORD*)a3 + 1) + 68i64 * i);
			if (v7 < 0)
				break;
		}
	}
	return (unsigned int)v7;
}


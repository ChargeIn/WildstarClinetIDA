#include "../winhttp.h"

//----- (000000014086D230) ----------------------------------------------------
char __fastcall sub_14086D230(__int64 a1, int a2)
{
	unsigned int v3; // ebp
	__int64 v4; // rax
	__int64 v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rdi
	unsigned __int64 i; // rdx

	v3 = a2 + *(_DWORD*)(a1 + 16);
	v4 = sub_1408819F0(dword_140C10F20, 2i64 * v3);
	v5 = v4;
	if (v4)
	{
		v6 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 1;
		v7 = (unsigned int)v6;
		if (*(_QWORD*)a1)
		{
			for (i = 0i64; i < (unsigned int)v6; *(_WORD*)(v5 + 2 * i - 2) = *(_WORD*)(*(_QWORD*)a1 + 2 * i - 2))
				++i;
			sub_140881720(dword_140C10F20, *(_QWORD*)a1);
		}
		*(_DWORD*)(a1 + 16) = v3;
		*(_QWORD*)(a1 + 8) = v5 + 2 * v7;
		*(_QWORD*)a1 = v5;
		LOBYTE(v4) = 1;
	}
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;


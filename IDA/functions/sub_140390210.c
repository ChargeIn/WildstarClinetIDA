#include "../winhttp.h"

//----- (0000000140390210) ----------------------------------------------------
_QWORD* __fastcall sub_140390210(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v5; // rax
	_QWORD* v6; // rdx
	__int64 v7; // rax

	a1[4] = 0i64;
	a1[5] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	a1[8] = 0i64;
	a1[9] = 0i64;
	*a1 = a2;
	a1[1] = a3;
	a1[2] = a4;
	a1[3] = a5;
	if (a2)
	{
		a1[4] = a2 + 152;
		a1[5] = *(_QWORD*)(a2 + 152);
		*(_QWORD*)(a2 + 152) = a1;
		v5 = a1[5];
		if (v5)
			*(_QWORD*)(v5 + 32) = a1 + 5;
	}
	v6 = (_QWORD*)(a1[2] + 224i64);
	if (!a1[6])
	{
		a1[6] = v6;
		a1[7] = *v6;
		*v6 = a1;
		v7 = a1[7];
		if (v7)
			*(_QWORD*)(v7 + 48) = a1 + 7;
	}
	*(_DWORD*)(a1[2] + 12i64) = 0;
	return a1;
}


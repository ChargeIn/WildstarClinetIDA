#include "../winhttp.h"

//----- (000000014038FEB0) ----------------------------------------------------
_QWORD* __fastcall sub_14038FEB0(_QWORD* a1, __int64 a2, __int64 a3)
{
	_QWORD* v4; // rdx
	_QWORD* v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rax
	_QWORD* v8; // rdx
	_QWORD* v9; // rcx
	__int64 v10; // rax

	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[4] = 0i64;
	a1[5] = 0i64;
	*a1 = a2;
	v4 = (_QWORD*)(a2 + 136);
	a1[1] = a3;
	if (!a1[2])
	{
		a1[2] = v4;
		v5 = a1 + 3;
		*v5 = *v4;
		*v4 = a1;
		if (*v5)
			*(_QWORD*)(*v5 + 16i64) = v5;
	}
	v6 = (_QWORD*)(a1[1] + 856i64);
	if (!a1[4])
	{
		a1[4] = v6;
		a1[5] = *v6;
		*v6 = a1;
		v7 = a1[5];
		if (v7)
			*(_QWORD*)(v7 + 32) = a1 + 5;
	}
	v8 = (_QWORD*)a1[1];
	if (!v8[111])
	{
		v9 = (_QWORD*)(v8[2] + 5352i64);
		v8[111] = v9;
		v8[112] = *v9;
		*v9 = v8;
		v10 = v8[112];
		if (v10)
			*(_QWORD*)(v10 + 888) = v8 + 112;
	}
	return a1;
}


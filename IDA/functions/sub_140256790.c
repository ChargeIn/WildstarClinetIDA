#include "../winhttp.h"

//----- (0000000140256790) ----------------------------------------------------
__int64 __fastcall sub_140256790(__int64* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	a1[294] = a1[206];
	v2 = a1[215];
	a1[295] = 0i64;
	a1[298] = v2;
	v3 = *a1;
	a1[296] = 0i64;
	a1[297] = 0i64;
	*(__int64*)((char*)a1 + 2420) = 0i64;
	*((_DWORD*)a1 + 607) = 0;
	a1[299] = 15i64;
	*((_DWORD*)a1 + 600) = 7;
	*(__int64*)((char*)a1 + 2404) = 1i64;
	*(__int64*)((char*)a1 + 2412) = 1i64;
	*((_DWORD*)a1 + 608) = 2;
	(*(void(__fastcall**)(__int64*))(v3 + 72))(a1);
	return (*(__int64(__fastcall**)(__int64*))(*a1 + 80))(a1);
}
// 140C65670: using guessed type __int64 qword_140C65670;


#include "../winhttp.h"

//----- (00000001402568E0) ----------------------------------------------------
__int64 __fastcall sub_1402568E0(__int64* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	a1[294] = a1[212];
	v2 = a1[213];
	a1[296] = 0i64;
	a1[295] = v2;
	v3 = a1[215];
	a1[297] = 0i64;
	a1[298] = v3;
	v4 = *a1;
	*((_DWORD*)a1 + 606) = 0;
	a1[299] = 255i64;
	*((_DWORD*)a1 + 600) = 3;
	*((_DWORD*)a1 + 601) = 1;
	*((_DWORD*)a1 + 602) = 4;
	*((_DWORD*)a1 + 603) = 4;
	a1[302] = 4i64;
	*((_DWORD*)a1 + 607) = 2;
	*((_DWORD*)a1 + 608) = 7;
	(*(void(__fastcall**)(__int64*))(v4 + 72))(a1);
	return (*(__int64(__fastcall**)(__int64*))(*a1 + 80))(a1);
}
// 140C65670: using guessed type __int64 qword_140C65670;


#include "../winhttp.h"

//----- (0000000140257890) ----------------------------------------------------
__int64 __fastcall sub_140257890(__int64* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	a1[294] = a1[207];
	v2 = a1[215];
	a1[295] = 0i64;
	a1[298] = v2;
	v3 = *a1;
	a1[296] = 0i64;
	a1[297] = 0i64;
	*((_DWORD*)a1 + 606) = 0;
	a1[299] = 15i64;
	*((_DWORD*)a1 + 600) = 3;
	*((_DWORD*)a1 + 601) = 1;
	*((_DWORD*)a1 + 602) = 128;
	*((_DWORD*)a1 + 603) = 128;
	a1[302] = 128i64;
	*((_DWORD*)a1 + 607) = 2;
	*((_DWORD*)a1 + 608) = 7;
	(*(void(__fastcall**)(__int64*))(v3 + 72))(a1);
	return (*(__int64(__fastcall**)(__int64*))(*a1 + 80))(a1);
}
// 140C65670: using guessed type __int64 qword_140C65670;


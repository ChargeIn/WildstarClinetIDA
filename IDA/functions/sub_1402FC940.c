#include "../winhttp.h"

//----- (00000001402FC940) ----------------------------------------------------
_BOOL8 __fastcall sub_1402FC940(__int64* a1)
{
	__int64 v1; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v1 + 16))(a1, v4, 0i64);
	return a1[97] != 0;
}
// 1402FC940: using guessed type int var_18[6];


#include "../winhttp.h"

//----- (000000014028D4D0) ----------------------------------------------------
__int64 __fastcall sub_14028D4D0(__int64* a1)
{
	__int64 v1; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v1 + 32))(a1, v4);
	return *((unsigned int*)a1 + 24);
}
// 14028D4D0: using guessed type int var_18[6];


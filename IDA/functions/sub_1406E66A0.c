#include "../winhttp.h"

//----- (00000001406E66A0) ----------------------------------------------------
void __fastcall sub_1406E66A0(__int64 a1, __int64** a2)
{
	__int64 v4; // rcx
	__int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF

	v5[1] = 0i64;
	v5[0] = 0i64;
	sub_1406E5430(a1, v5);
	sub_1406E5500(a1, a2, v5, a1 + 2648, 0i64);
	v4 = v5[0];
	if (!*(_QWORD*)(a1 + 2656))
		a2 = 0i64;
	*(_QWORD*)(a1 + 2640) = a2;
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
}


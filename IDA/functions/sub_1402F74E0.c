#include "../winhttp.h"

//----- (00000001402F74E0) ----------------------------------------------------
__m128* __fastcall sub_1402F74E0(_QWORD* a1, __int64 a2, __m128* a3)
{
	__m128* v4; // rbx
	__m128* v5; // rax
	__m128* v7[10]; // [rsp+30h] [rbp-68h] BYREF

	v4 = (__m128*)(a1[2] + 304i64);
	v5 = (__m128*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 472i64))(a1);
	v7[1] = v4;
	v7[0] = v5;
	return sub_1401AFB10(v7, a3);
}


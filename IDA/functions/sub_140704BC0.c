#include "../winhttp.h"

//----- (0000000140704BC0) ----------------------------------------------------
__int64 __fastcall sub_140704BC0(__int64 a1)
{
	unsigned __int8 v2; // al
	__int64 v3; // rdx
	__m128i v4; // xmm0
	__int64 result; // rax

	v2 = sub_1404CF1A0();
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v3 + 8) = 3;
	v4 = _mm_cvtsi32_si128(v2);
	result = 1i64;
	*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}


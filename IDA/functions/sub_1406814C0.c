#include "../winhttp.h"

//----- (00000001406814C0) ----------------------------------------------------
__int64 __fastcall sub_1406814C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdx
	__m128i v5; // xmm0
	__int64 v6; // rcx
	__int64 result; // rax
	__int64 v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8), *(_DWORD*)(*(_QWORD*)(v4 + 24) + 32i64) != -1))
	{
		v5 = _mm_cvtsi32_si128(*(_DWORD*)(v4 + 104));
		v6 = a1[2];
		result = 1i64;
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
		a1[2] += 16i64;
	}
	else
	{
		v8 = a1[2];
		*(_DWORD*)(v8 + 8) = 3;
		*(_QWORD*)v8 = 0i64;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}


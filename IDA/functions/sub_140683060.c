#include "../winhttp.h"

//----- (0000000140683060) ----------------------------------------------------
__int64 __fastcall sub_140683060(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rbx
	unsigned int v7; // eax
	__m128i v8; // xmm0
	__int64 result; // rax
	__int64 v10; // rax

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(unsigned int**)(v3 + 8)) != 0i64
		&& (v5 = sub_140617410((__int64)v4, *v4)) != 0)
	{
		v6 = a1[2];
		v7 = sub_140616B80(v5);
		*(_DWORD*)(v6 + 8) = 3;
		v8 = _mm_cvtsi32_si128(v7);
		result = 1i64;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
		a1[2] += 16i64;
	}
	else
	{
		v10 = a1[2];
		*(_QWORD*)v10 = 0i64;
		*(_DWORD*)(v10 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;


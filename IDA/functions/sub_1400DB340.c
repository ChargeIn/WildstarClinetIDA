#include "../winhttp.h"

//----- (00000001400DB340) ----------------------------------------------------
__int64 __fastcall sub_1400DB340(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 result; // rax
	float v7; // xmm0_4
	__int64 v8; // rdx
	__int64 v9; // rcx

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v7 = sub_1400C9E40((_QWORD*)result).m128_f32[0];
		v8 = *(_QWORD*)(v1 + 400);
		result = 1i64;
		v9 = *(_QWORD*)(v8 + 16);
		*(double*)v9 = v7;
		*(_DWORD*)(v9 + 8) = 3;
		*(_QWORD*)(v8 + 16) += 16i64;
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;


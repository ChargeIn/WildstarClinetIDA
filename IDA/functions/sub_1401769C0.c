#include "../winhttp.h"

//----- (00000001401769C0) ----------------------------------------------------
__int64 __fastcall sub_1401769C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	float v4; // xmm0_4
	__int64 result; // rax

	v2 = sub_1401768E0(a1);
	v3 = a1[2];
	v4 = *(float*)(v2 + 1032);
	*(_DWORD*)(v3 + 8) = 3;
	result = 1i64;
	*(double*)v3 = v4;
	a1[2] += 16i64;
	return result;
}


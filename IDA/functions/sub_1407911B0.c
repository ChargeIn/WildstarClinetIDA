#include "../winhttp.h"

//----- (00000001407911B0) ----------------------------------------------------
__int64 __fastcall sub_1407911B0(_QWORD* a1)
{
	__int64 v2; // rcx

	sub_140056BB0(a1, 1u, 0i64);
	sub_140056BB0(a1, 2u, 0i64);
	for (; a1[2] < (unsigned __int64)(a1[3] + 32i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	v2 = a1[3] + 32i64;
	a1[2] = v2;
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	sub_1400587D0(a1, (__int64)sub_140790EC0, 3);
	return 1i64;
}


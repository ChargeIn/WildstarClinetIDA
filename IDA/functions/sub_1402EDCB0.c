#include "../winhttp.h"

//----- (00000001402EDCB0) ----------------------------------------------------
__int64 __fastcall sub_1402EDCB0(__int64 a1)
{
	__int64 v1; // rsi
	__int64* v2; // rbx
	int i; // edi

	v1 = a1 - 16;
	v2 = (__int64*)(a1 + 352i64 * *(int*)(a1 - 16));
	for (i = *(_DWORD*)(a1 - 16) - 1; i >= 0; --i)
	{
		v2 -= 44;
		sub_1402EE270(v2);
	}
	sub_14018B900(v1, 0);
	return v1;
}


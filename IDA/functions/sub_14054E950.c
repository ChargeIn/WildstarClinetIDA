#include "../winhttp.h"

//----- (000000014054E950) ----------------------------------------------------
int* __fastcall sub_14054E950(int* a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
	sub_1407E4830(a1, 0i64, 0xD0ui64);
	sub_1407E4830(a1, 0i64, 0x100ui64);
	sub_14054EB60((__int64)a1, a2, a3, a4, a5, a6);
	a1[52] = a2;
	a1[50] = *(_DWORD*)(a6 + 52) & 1;
	return a1;
}


#include "../winhttp.h"

//----- (0000000140867580) ----------------------------------------------------
char __fastcall sub_140867580(__int64 a1, int a2, char a3)
{
	__int64 v4; // rcx

	*(_BYTE*)(a1 + 644) |= 4u;
	*(_DWORD*)(a1 + 636) = 0;
	v4 = *(_QWORD*)(a1 + 544);
	*(_QWORD*)(a1 + 544) = 0i64;
	if (v4)
		sub_140866000(v4);
	return sub_1408610B0(a1, a2, a3);
}


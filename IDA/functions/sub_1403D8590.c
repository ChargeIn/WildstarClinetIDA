#include "../winhttp.h"

//----- (00000001403D8590) ----------------------------------------------------
__int64 __fastcall sub_1403D8590(_DWORD* a1, __int64 a2, __int64 a3)
{
	unsigned __int64 v3; // rdx
	__int64 i; // rdx
	int v5; // eax

	v3 = (__int64)((unsigned __int128)((a2 - (__int64)a1) * (__int128)0xE38E38E38E38E39i64) >> 64) >> 2;
	for (i = (v3 >> 63) + v3; i > 0; *(_DWORD*)(a3 - 4) = *(a1 - 1))
	{
		--i;
		a3 += 72i64;
		*(_DWORD*)(a3 - 72) = *a1;
		v5 = a1[1];
		a1 += 18;
		*(_DWORD*)(a3 - 68) = v5;
		*(_DWORD*)(a3 - 64) = *(a1 - 16);
		*(_DWORD*)(a3 - 60) = *(a1 - 15);
		*(_DWORD*)(a3 - 56) = *(a1 - 14);
		*(_DWORD*)(a3 - 52) = *(a1 - 13);
		*(_DWORD*)(a3 - 48) = *(a1 - 12);
		*(_DWORD*)(a3 - 44) = *(a1 - 11);
		*(_DWORD*)(a3 - 40) = *(a1 - 10);
		*(_DWORD*)(a3 - 36) = *(a1 - 9);
		*(_DWORD*)(a3 - 32) = *(a1 - 8);
		*(_DWORD*)(a3 - 28) = *(a1 - 7);
		*(_DWORD*)(a3 - 24) = *(a1 - 6);
		*(_DWORD*)(a3 - 20) = *(a1 - 5);
		*(_DWORD*)(a3 - 16) = *(a1 - 4);
		*(_DWORD*)(a3 - 12) = *(a1 - 3);
		*(_DWORD*)(a3 - 8) = *(a1 - 2);
	}
	return a3;
}


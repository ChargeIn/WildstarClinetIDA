#include "../winhttp.h"

//----- (0000000140874B10) ----------------------------------------------------
__int64 __fastcall sub_140874B10(__int64 a1, char** a2)
{
	char v2; // r8
	int v3; // r8d

	v2 = *(*a2)++;
	*(_BYTE*)(a1 + 62) &= 0xE0u;
	*(_BYTE*)(a1 + 62) |= v2 & 0x1F;
	v3 = *(_DWORD*)*a2;
	*a2 += 4;
	*(_BYTE*)(a1 + 62) |= 0x20u;
	*(_DWORD*)(a1 + 64) = v3;
	return 1i64;
}


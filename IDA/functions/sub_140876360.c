#include "../winhttp.h"

//----- (0000000140876360) ----------------------------------------------------
__int64 __fastcall sub_140876360(__int64 a1, __int64* a2)
{
	char v2; // r9
	int v3; // r9d

	v2 = *(_BYTE*)(*a2)++;
	*(_BYTE*)(a1 + 88) = v2 != 0;
	v3 = *(unsigned __int8*)(*a2)++;
	*(_DWORD*)(a1 + 92) = v3;
	return sub_140876B30(a1, a2);
}


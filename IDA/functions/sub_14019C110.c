#include "../winhttp.h"

//----- (000000014019C110) ----------------------------------------------------
void __fastcall sub_14019C110(__int64 a1, int* a2)
{
	int v2; // r9d
	int v3; // r8d

	v2 = *a2;
	v3 = *(_DWORD*)(a1 + 52);
	if (*(_DWORD*)(a1 + 56) < *a2)
		v2 = *(_DWORD*)(a1 + 56);
	if (v3 < v2)
		v3 = v2;
	*a2 = v3;
}


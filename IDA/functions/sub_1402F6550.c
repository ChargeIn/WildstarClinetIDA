#include "../winhttp.h"

//----- (00000001402F6550) ----------------------------------------------------
_BOOL8 __fastcall sub_1402F6550(__int64 a1)
{
	__int64 v1; // rdx

	v1 = *(_QWORD*)(a1 + 16);
	return *(_DWORD*)(a1 + 1396) == *(_DWORD*)(v1 + 220)
		&& (*(_DWORD*)(v1 + 236) & *(_DWORD*)(a1 + 1408)) == *(_DWORD*)(v1 + 236);
}


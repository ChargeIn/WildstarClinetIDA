#include "../winhttp.h"

//----- (0000000140889450) ----------------------------------------------------
BOOL __fastcall sub_140889450(__int64 a1, __int64 a2)
{
	void* v2; // rcx

	v2 = *(void**)(a2 + 8);
	*(_BYTE*)(a2 + 16) = 0;
	return SetEvent(v2);
}


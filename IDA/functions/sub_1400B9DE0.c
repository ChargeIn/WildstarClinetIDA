#include "../winhttp.h"

//----- (00000001400B9DE0) ----------------------------------------------------
void __fastcall sub_1400B9DE0(__int64 a1, int a2, __int64 a3)
{
	if (a2 < 0)
	{
		*(_DWORD*)(a3 + 32) &= ~2u;
		*(_DWORD*)(a3 + 32) |= 4u;
		*(_DWORD*)(a3 + 40) = sub_14018CDF0();
	}
}


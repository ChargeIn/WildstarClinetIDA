#include "../winhttp.h"

//----- (000000014062F170) ----------------------------------------------------
_BOOL8 __fastcall sub_14062F170(_DWORD* a1, _DWORD* a2)
{
	return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] && a1[4] == a2[4];
}


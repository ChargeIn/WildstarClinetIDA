#include "../winhttp.h"

//----- (00000001407B07D0) ----------------------------------------------------
_BOOL8 __fastcall sub_1407B07D0(_QWORD* a1, unsigned __int64 a2)
{
	return a2 >> 3 < a1[1] && ((unsigned __int8)(1 << (a2 & 7)) & *(_BYTE*)(*a1 + (a2 >> 3))) != 0;
}


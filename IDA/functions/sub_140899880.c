#include "../winhttp.h"

//----- (0000000140899880) ----------------------------------------------------
void __fastcall sub_140899880(__int64 a1)
{
	++* (_DWORD*)(a1 + 80);
	if (*(_BYTE*)(a1 + 152))
	{
		*(_BYTE*)(a1 + 152) = 0;
		sub_14088B630(a1);
	}
	sub_14088FEB0(a1);
	sub_14088B630(a1);
}


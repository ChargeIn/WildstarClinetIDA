#include "../winhttp.h"

//----- (0000000140901008) ----------------------------------------------------
__int64 __fastcall sub_140901008(unsigned __int64 a1, char a2, __int64 a3)
{
	for (; a3; --a3)
	{
		if (*(_BYTE*)a1 == a2)
			break;
		++a1;
	}
	return a1 & -(__int64)(a3 != 0);
}


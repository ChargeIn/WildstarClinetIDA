#include "../winhttp.h"

//----- (0000000140375080) ----------------------------------------------------
__int64 __fastcall sub_140375080(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
			sub_140354A40(a1);
		return 0i64;
	}
	return result;
}


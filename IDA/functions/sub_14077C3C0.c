#include "../winhttp.h"

//----- (000000014077C3C0) ----------------------------------------------------
__int64 __fastcall sub_14077C3C0(volatile signed __int32* a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement(a1 + 38);
	if (!(_DWORD)result)
	{
		if (a1)
			(*(void(__fastcall**)(volatile signed __int32*, __int64))(*(_QWORD*)a1 + 120i64))(a1, 1i64);
		return 0i64;
	}
	return result;
}


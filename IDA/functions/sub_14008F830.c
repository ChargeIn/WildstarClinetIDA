#include "../winhttp.h"

//----- (000000014008F830) ----------------------------------------------------
__int64 __fastcall sub_14008F830(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 4ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 2ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006BF60(a1, (_WORD*)(a3 + 12), 0x10ui64);
				if ((int)result >= 0)
					return sub_14006C090(a1, (_DWORD*)(a3 + 16), 0xEui64);
			}
		}
	}
	return result;
}


#include "../winhttp.h"

//----- (000000014008EE90) ----------------------------------------------------
__int64 __fastcall sub_14008EE90(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x12ui64);
	if ((int)result >= 0)
	{
		result = sub_14006BE30(a1, (_BYTE*)(a3 + 4), 4ui64);
		if ((int)result >= 0)
		{
			result = sub_14006BE30(a1, (_BYTE*)(a3 + 5), 3ui64);
			if ((int)result >= 0)
				return sub_14006C090(a1, (_DWORD*)(a3 + 8), 1ui64);
		}
	}
	return result;
}


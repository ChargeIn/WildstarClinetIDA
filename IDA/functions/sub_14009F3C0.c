#include "../winhttp.h"

//----- (000000014009F3C0) ----------------------------------------------------
__int64 __fastcall sub_14009F3C0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 2, 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, a3 + 3, 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 4, 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, a3 + 5, 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, a3 + 6, 1ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, a3 + 7, 1ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, a3 + 8, 3ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, a3 + 9, 8ui64);
										if ((int)result >= 0)
											return sub_14009F0A0(a1, v6, a3 + 10);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 14009F4D4: variable 'v6' is possibly undefined


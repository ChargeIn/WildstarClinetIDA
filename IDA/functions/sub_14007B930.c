#include "../winhttp.h"

//----- (000000014007B930) ----------------------------------------------------
__int64 __fastcall sub_14007B930(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006BE30(a1, (_BYTE*)(a3 + 4), 5ui64);
		if ((int)result >= 0)
		{
			v7 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned __int8*)(a3 + 4));
			*(_QWORD*)(a3 + 8) = v7;
			if (v7)
				return sub_140337160(a1, v7, 4i64 * *(unsigned __int8*)(a3 + 4));
			else
				return 2147500037i64;
		}
	}
	return result;
}


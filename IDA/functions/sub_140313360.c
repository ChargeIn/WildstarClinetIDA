#include "../winhttp.h"

//----- (0000000140313360) ----------------------------------------------------
__int64 __fastcall sub_140313360(_DWORD* a1)
{
	bool v1; // zf
	__int64 result; // rax

	v1 = a1[260]-- == 1;
	result = (unsigned int)a1[260];
	if (v1)
	{
		(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)a1 + 16i64))(a1, 1i64);
		return 0i64;
	}
	return result;
}


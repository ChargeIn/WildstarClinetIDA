#include "../winhttp.h"

//----- (00000001408A7F50) ----------------------------------------------------
__int64 __fastcall sub_1408A7F50(_QWORD* a1, __int64 a2)
{
	__int64 result; // rax

	if (*a1)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		*a1 = 0i64;
	}
	return result;
}


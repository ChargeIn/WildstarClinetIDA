#include "../winhttp.h"

//----- (00000001408E73B0) ----------------------------------------------------
__int64 __fastcall sub_1408E73B0(_QWORD* a1, __int64 a2)
{
	__int64 result; // rax

	result = sub_1408E77A0((__int64)a1, a2);
	if (a1[1])
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		a1[1] = 0i64;
	}
	if (a1[2])
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		a1[2] = 0i64;
	}
	a1[6] = 0i64;
	a1[5] = 0i64;
	return result;
}


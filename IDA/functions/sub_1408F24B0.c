#include "../winhttp.h"

//----- (00000001408F24B0) ----------------------------------------------------
__int64 __fastcall sub_1408F24B0(__int64 a1, __int64 a2)
{
	if (*(_QWORD*)(a1 + 24))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16));
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	if (*(_QWORD*)(a1 + 32))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16));
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	sub_1408F4350(a1 + 304, a2);
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	return 1i64;
}


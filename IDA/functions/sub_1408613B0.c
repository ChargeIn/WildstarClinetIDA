#include "../winhttp.h"

//----- (00000001408613B0) ----------------------------------------------------
__int64 __fastcall sub_1408613B0(_QWORD* a1)
{
	if ((*(_BYTE*)(a1[3] + 383i64) & 2) != 0)
		return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 144i64))(a1);
	else
		return 1i64;
}


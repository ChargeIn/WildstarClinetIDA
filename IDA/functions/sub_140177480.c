#include "../winhttp.h"

//----- (0000000140177480) ----------------------------------------------------
__int64 __fastcall sub_140177480(__int64 a1, _WORD* a2)
{
	if ((*(_BYTE*)(a1 + 664) & 1) != 0)
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1024) + 80i64))(*(_QWORD*)(a1 + 1024));
	else
		return sub_1400CDD20(a1, a2);
}


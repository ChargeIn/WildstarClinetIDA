#include "../winhttp.h"

//----- (0000000140346780) ----------------------------------------------------
__int64 __fastcall sub_140346780(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
	if (a5 && *(_QWORD*)a5 && a4 < 0)
		(*(void(__fastcall**)(__int64, _QWORD))a5)(0x80000000i64, *(_QWORD*)(a5 + 8));
	return 0i64;
}


#include "../winhttp.h"

//----- (00000001401E0B20) ----------------------------------------------------
__int64 __fastcall sub_1401E0B20(_BYTE* a1)
{
	if ((a1[3140] & 2) != 0)
		return 0i64;
	else
		return (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 216i64))(a1);
}


#include "../winhttp.h"

//----- (0000000140766350) ----------------------------------------------------
__int64 __fastcall sub_140766350(__int64 a1, __int64 a2, __int64 a3)
{
	return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(a3 + 8))(
		*(_QWORD*)a3 + (a1 << 6),
		*(_QWORD*)a3 + (a2 << 6),
		*(_QWORD*)(a3 + 16));
}


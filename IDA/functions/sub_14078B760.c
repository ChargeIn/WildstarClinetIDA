#include "../winhttp.h"

//----- (000000014078B760) ----------------------------------------------------
__int64 __fastcall sub_14078B760(__int64 a1)
{
	__int64 v1; // r8
	__int64 v2; // rdx

	v1 = *(_QWORD*)(a1 + 32);
	v2 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v2 = *(_QWORD*)(v1 + 160);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v1 + 168);
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}


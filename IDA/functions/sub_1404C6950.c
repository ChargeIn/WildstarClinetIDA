#include "../winhttp.h"

//----- (00000001404C6950) ----------------------------------------------------
__int64 __fastcall sub_1404C6950(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rax

	if (!a2)
		return 2147500037i64;
	v2 = *(_QWORD*)(a1 + 664);
	if (!v2)
		return 2147500037i64;
	*a2 = v2;
	return 0i64;
}


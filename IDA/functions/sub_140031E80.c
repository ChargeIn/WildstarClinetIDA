#include "../winhttp.h"

//----- (0000000140031E80) ----------------------------------------------------
void __fastcall sub_140031E80(__int64 a1)
{
	__int64 v2; // rcx

	*(_DWORD*)a1 = 17;
	*(_QWORD*)(a1 + 4) = 3i64;
	v2 = a1 + 24;
	*(_QWORD*)(v2 - 8) = 0i64;
	sub_140008410(v2);
	if (*(_QWORD*)(a1 + 72))
	{
		sub_140032150(a1 + 56, *(_QWORD**)(*(_QWORD*)(a1 + 64) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 64) + 16i64) = *(_QWORD*)(a1 + 64);
		*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 64) + 24i64) = *(_QWORD*)(a1 + 64);
		*(_QWORD*)(a1 + 72) = 0i64;
	}
}


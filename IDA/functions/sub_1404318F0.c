#include "../winhttp.h"

//----- (00000001404318F0) ----------------------------------------------------
__int64 __fastcall sub_1404318F0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r9

	if (a2)
		v3 = *(unsigned int*)(*(_QWORD*)(a2 + 8) + 4i64);
	else
		v3 = 5i64;
	return Apollo_LUAEvent(a1, "RewardTrackActive", "iww", v3, a2, a3);
}


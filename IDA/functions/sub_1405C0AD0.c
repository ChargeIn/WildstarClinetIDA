#include "../winhttp.h"

//----- (00000001405C0AD0) ----------------------------------------------------
__int64 __fastcall sub_1405C0AD0(_DWORD* a1, _DWORD* a2)
{
	a1[24] = *a2;
	a1[25] = a2[1];
	a1[26] = a2[2];
	a1[27] = a2[3];
	a1[28] = a2[4];
	a1[29] = a2[5];
	a1[30] = a2[6];
	a1[31] = a2[7];
	a1[32] = a2[8];
	a1[33] = a2[9];
	a1[34] = a2[10];
	a1[35] = a2[11];
	a1[36] = a2[12];
	a1[37] = a2[13];
	a1[38] = a2[14];
	a1[39] = a2[15];
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MatchingPenaltyUpdated", &unk_1409D128B);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;


#include "../winhttp.h"

//----- (00000001403E3310) ----------------------------------------------------
__int64 __fastcall sub_1403E3310(__int64 a1, __int64 a2, double a3, double a4)
{
	char v4; // bl

	v4 = a2;
	sub_1403E3350(a1, a2, a3, a4);
	if ((v4 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}


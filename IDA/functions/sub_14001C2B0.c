#include "../winhttp.h"

//----- (000000014001C2B0) ----------------------------------------------------
int* __fastcall sub_14001C2B0(__int64 a1, int* a2, int* a3)
{
	if (a2 != a3)
	{
		sub_1407DB590(a2, a3, 2 * ((__int64)(*(_QWORD*)(a1 + 16) - (_QWORD)a3) >> 1) + 2);
		*(_QWORD*)(a1 + 16) += -2 * (((char*)a3 - (char*)a2) >> 1);
	}
	return a2;
}


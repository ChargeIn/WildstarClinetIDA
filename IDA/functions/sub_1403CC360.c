#include "../winhttp.h"

//----- (00000001403CC360) ----------------------------------------------------
__int64 __fastcall sub_1403CC360(__int64 a1, int* a2)
{
	__int64 v4; // rax
	int v5; // ecx
	_DWORD* v6; // rdx

	v4 = *a2;
	if ((int)v4 >= 0)
	{
		v5 = a2[2];
		if (v5 || (unsigned int)v4 >= 0xC)
		{
			if (v5 != 1 || (unsigned int)v4 >= 5)
				return 0i64;
			v6 = (_DWORD*)(a1 + 72 * v4 + 2264);
		}
		else
		{
			v6 = (_DWORD*)(a1 + 72 * v4 + 1400);
		}
		if (v6)
		{
			v6[14] = a2[1];
			*v6 = a2[3];
			v6[7] = a2[10];
			v6[1] = a2[4];
			v6[8] = a2[11];
			v6[2] = a2[5];
			v6[9] = a2[12];
			v6[3] = a2[6];
			v6[10] = a2[13];
			v6[4] = a2[7];
			v6[11] = a2[14];
			v6[5] = a2[8];
			v6[12] = a2[15];
			v6[6] = a2[9];
			v6[13] = a2[16];
		}
	}
	return 0i64;
}


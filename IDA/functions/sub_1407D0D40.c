#include "../winhttp.h"

//----- (00000001407D0D40) ----------------------------------------------------
__int64 __fastcall sub_1407D0D40(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rsi
	__int64 v3; // rbx
	int v4; // edi
	__int64* v5; // rbx
	__int64 v6; // rcx

	v1 = *(int*)(a1 - 8);
	v2 = a1 - 8;
	v3 = 48 * v1 + 40;
	v4 = v1 - 1;
	if (v4 >= 0)
	{
		v5 = (__int64*)(a1 + v3);
		do
		{
			v6 = *(v5 - 7);
			v5 -= 6;
			sub_14018B900(v6, 0);
			sub_14018B900(*v5, 0);
			sub_14018B900(*(v5 - 3), 0);
			--v4;
		} while (v4 >= 0);
	}
	sub_14018B900(v2, 0);
	return v2;
}


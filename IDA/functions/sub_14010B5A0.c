#include "../winhttp.h"

//----- (000000014010B5A0) ----------------------------------------------------
_QWORD* __fastcall sub_14010B5A0(_QWORD* a1, __int64 a2, int* a3)
{
	__int64 v3; // rbx
	int* v7; // rax

	v3 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v7 = sub_14018B280(16i64, 0);
	a1[1] = v7;
	a1[2] = v7;
	a1[3] = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	sub_14010AE30(a1 + 4, a2, 0i64);
	sub_14010AE30(a1 + 9, a2, 0i64);
	sub_14010AE30(a1 + 14, a2, 0i64);
	sub_14010AE30(a1 + 19, a2, 0i64);
	sub_14010AE30(a1 + 24, a2, 0i64);
	sub_14010AE30(a1 + 29, a2, 0i64);
	sub_14010AE30(a1 + 34, a2, 0i64);
	sub_14010AE30(a1 + 39, a2, 0i64);
	sub_14010AE30(a1 + 44, a2, 0i64);
	if (a3)
	{
		if (*(_WORD*)a3)
		{
			do
				++v3;
			while (*((_WORD*)a3 + v3));
		}
		sub_14001C480((__int64)a1, a3, (int*)((char*)a3 + 2 * v3));
	}
	return a1;
}


#include "../winhttp.h"

//----- (00000001403FF530) ----------------------------------------------------
int* __fastcall sub_1403FF530(__int64 a1, _QWORD* a2)
{
	int* v3; // rbx

	v3 = sub_14018B280(80i64, 0);
	if (v3 != (int*)-32i64)
	{
		*((_QWORD*)v3 + 4) = *a2;
		*((_QWORD*)v3 + 5) = a2[1];
		sub_1403D2AA0((__int64)(v3 + 12), (__int64)(a2 + 2));
	}
	return v3;
}


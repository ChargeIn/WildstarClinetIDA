#include "../winhttp.h"

//----- (00000001400DE900) ----------------------------------------------------
__int64 __fastcall sub_1400DE900(_QWORD* a1)
{
	__int64 v2; // rdi
	char* v3; // rax
	int* v4; // rbx
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	int* v7; // [rsp+28h] [rbp-20h]

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v6, v3);
		v4 = v7;
		if (*(_WORD*)v7)
			sub_1400D2C30(v2, v7);
		sub_14018B900((__int64)v4, 0);
	}
	return 0i64;
}


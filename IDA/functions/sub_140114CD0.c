#include "../winhttp.h"

//----- (0000000140114CD0) ----------------------------------------------------
__int64 __fastcall sub_140114CD0(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 v2; // r8
	unsigned int v3; // eax
	__int64 v4; // r9
	__int64 v5; // rdx
	__int64 v6; // rsi
	__int64 v7; // rbx
	int v8; // eax

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = sub_140114A30(a1);
	v7 = (int)sub_1400F26A0(v1 + 384, 2);
	v8 = sub_1400F26A0(v1 + 384, 3);
	sub_140111750(v6, v7, v8);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;


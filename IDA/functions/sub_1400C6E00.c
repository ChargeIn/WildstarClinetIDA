#include "../winhttp.h"

//----- (00000001400C6E00) ----------------------------------------------------
char __fastcall sub_1400C6E00(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx

	if ((*(_BYTE*)(a1 + 656) & 2) == 0 || !*(_QWORD*)(a1 + 48))
		return 0;
	if (!*(_QWORD*)(a1 + 472))
	{
		v2 = (__int64)sub_14018B280(1400i64, 0);
		if (v2)
			v2 = sub_1400C4120(v2);
		v3 = *(_QWORD*)(a1 + 48) + 168i64;
		*(_QWORD*)(a1 + 472) = v2;
		sub_1400C4330(v2, v3, 1);
	}
	return 1;
}


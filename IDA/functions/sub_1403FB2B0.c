#include "../winhttp.h"

//----- (00000001403FB2B0) ----------------------------------------------------
void __fastcall sub_1403FB2B0(__int64 a1)
{
	if (*(_QWORD*)(a1 + 16))
	{
		sub_1403FD820(a1, *(_QWORD**)(*(_QWORD*)(a1 + 8) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 8), 0);
}


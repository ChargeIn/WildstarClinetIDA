#include "../winhttp.h"

//----- (0000000140582D30) ----------------------------------------------------
void __fastcall sub_140582D30(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	v2 = a1[7];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	if (a1[5])
	{
		sub_140590310((__int64)(a1 + 3), *(_QWORD**)(a1[4] + 8i64));
		*(_QWORD*)(a1[4] + 16i64) = a1[4];
		*(_QWORD*)(a1[4] + 8i64) = 0i64;
		*(_QWORD*)(a1[4] + 24i64) = a1[4];
		a1[5] = 0i64;
	}
	sub_14018B900(a1[4], 0);
	v3 = a1[1];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16i64) + 8i64))(*a1 - 16i64);
}


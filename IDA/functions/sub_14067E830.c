#include "../winhttp.h"

//----- (000000014067E830) ----------------------------------------------------
__int64 __fastcall sub_14067E830(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx

	v1 = sub_14067B760(a1);
	v2 = v1;
	if (v1
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v1 + 208i64))(v1) >= 2
		&& *(_DWORD*)(**(_QWORD**)(v2 + 48) + 12i64) == 22)
	{
		sub_1406195B0();
	}
	return 0i64;
}


#include "../winhttp.h"

//----- (00000001402575F0) ----------------------------------------------------
__int64 __fastcall sub_1402575F0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 result; // rax

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	if ((unsigned int)(*(_DWORD*)(a1 + 40) - 19) <= 7)
		sub_140255F70(a1, *(_QWORD*)(a1 + 1704), 4u);
	v2 = *(_QWORD*)(a1 + 1664);
	*(_QWORD*)(a1 + 2360) = 0i64;
	*(_QWORD*)(a1 + 2368) = 0i64;
	*(_QWORD*)(a1 + 2376) = 0i64;
	*(_QWORD*)(a1 + 2352) = v2;
	v3 = *(_QWORD*)(a1 + 1720);
	*(_QWORD*)(a1 + 2424) = 0i64;
	*(_QWORD*)(a1 + 2384) = v3;
	v4 = *(_QWORD*)a1;
	*(_QWORD*)(a1 + 2392) = 7i64;
	*(_DWORD*)(a1 + 2400) = 7;
	*(_DWORD*)(a1 + 2404) = 1;
	*(_DWORD*)(a1 + 2408) = 4;
	*(_DWORD*)(a1 + 2412) = 4;
	*(_QWORD*)(a1 + 2416) = 4i64;
	*(_DWORD*)(a1 + 2432) = 2;
	(*(void(__fastcall**)(__int64))(v4 + 72))(a1);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
	*(_DWORD*)(a1 + 148) = 13;
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;


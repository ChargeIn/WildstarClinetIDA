#include "../winhttp.h"

//----- (00000001404208F0) ----------------------------------------------------
__int64 __fastcall sub_1404208F0(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v3; // rcx
	__int64 result; // rax

	*a3 += 8i64;
	v3 = *(_QWORD*)(a2 + 16);
	result = *(_QWORD*)(*a3 - 8i64);
	*(_DWORD*)(v3 + 8) = 2;
	*(_QWORD*)v3 = result;
	*(_QWORD*)(a2 + 16) += 16i64;
	return result;
}


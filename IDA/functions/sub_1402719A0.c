#include "../winhttp.h"

//----- (00000001402719A0) ----------------------------------------------------
__int64 __fastcall sub_1402719A0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 7804) != a2)
	{
		*(_DWORD*)(a1 + 7804) = a2;
		return (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			14i64,
			a2);
	}
	return result;
}


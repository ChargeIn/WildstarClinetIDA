#include "../winhttp.h"

//----- (00000001408A0DA0) ----------------------------------------------------
__int64 __fastcall sub_1408A0DA0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_DWORD*)(a1 + 8) = -1052770304;
	*(_DWORD*)(a1 + 12) = 1082130432;
	*(_DWORD*)(a1 + 16) = 1008981770;
	*(_DWORD*)(a1 + 20) = 1036831949;
	*(_DWORD*)(a1 + 24) = 1065353216;
	*(_WORD*)(a1 + 28) = 257;
	return 1i64;
}


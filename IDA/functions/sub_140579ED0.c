#include "../winhttp.h"

//----- (0000000140579ED0) ----------------------------------------------------
__int64 __fastcall sub_140579ED0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
	sub_1407E4830((int*)a1, 0i64, 0xD0ui64);
	sub_1407E4830((int*)a1, 0i64, 0x100ui64);
	sub_140579F60(a1, a3, a4);
	*(_DWORD*)(a1 + 208) = a2;
	*(_DWORD*)(a1 + 200) = *(_DWORD*)(a3 + 88) & 1;
	if (a5)
	{
		*(_QWORD*)(a1 + 84) = 0i64;
		*(_QWORD*)(a1 + 92) = 0i64;
		*(_QWORD*)(a1 + 100) = 0i64;
		*(_DWORD*)(a1 + 132) = 0;
	}
	return a1;
}


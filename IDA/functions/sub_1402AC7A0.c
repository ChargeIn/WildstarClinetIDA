#include "../winhttp.h"

//----- (00000001402AC7A0) ----------------------------------------------------
__int64 __fastcall sub_1402AC7A0(__int64 a1, int a2)
{
	if (*(int*)(a1 + 232) >= 1 || a2 < 1)
	{
		*(_DWORD*)(a1 + 232) = a2;
		return 0i64;
	}
	else
	{
		if (*(_QWORD*)(a1 + 176) || *(_QWORD*)(a1 + 184))
			sub_140195960(a1 + 24, 0, a1 + 168, 5);
		if (*(_QWORD*)(a1 + 208) || *(_QWORD*)(a1 + 216))
			sub_140195960(a1 + 96, 0, a1 + 200, 5);
		*(_DWORD*)(a1 + 232) = a2;
		return 0i64;
	}
}


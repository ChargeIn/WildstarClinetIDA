#include "../winhttp.h"

//----- (0000000140298430) ----------------------------------------------------
__int64 __fastcall sub_140298430(__int64 a1, int a2)
{
	if (*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6616i64))
	{
		if (*(int*)(a1 + 232) >= 1 || a2 < 1)
			goto LABEL_17;
		if (*(_QWORD*)(a1 + 176) || *(_QWORD*)(a1 + 184))
			sub_140195960(a1 + 24, 0, a1 + 168, 5);
		goto LABEL_14;
	}
	if (*(int*)(a1 + 232) < 1 && a2 >= 1 && (*(_QWORD*)(a1 + 176) || *(_QWORD*)(a1 + 184)))
		sub_140195960(a1 + 24, 0, a1 + 168, 5);
	if (*(int*)(a1 + 232) < 2 && a2 >= 2)
	{
	LABEL_14:
		if (*(_QWORD*)(a1 + 208) || *(_QWORD*)(a1 + 216))
			sub_140195960(a1 + 96, 0, a1 + 200, 5);
	}
LABEL_17:
	*(_DWORD*)(a1 + 232) = a2;
	return 0i64;
}


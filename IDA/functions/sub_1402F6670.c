#include "../winhttp.h"

//----- (00000001402F6670) ----------------------------------------------------
void __fastcall sub_1402F6670(__int64 a1, int a2)
{
	__int64 i; // rbx

	if (*(_DWORD*)(a1 + 320) != a2)
	{
		*(_DWORD*)(a1 + 320) = a2;
		if (!a2)
			sub_1402FAF90(a1, 0);
		for (i = *(_QWORD*)(a1 + 1232); i; i = *(_QWORD*)(i + 1248))
			sub_1402F6670(i, *(unsigned int*)(a1 + 320));
	}
}


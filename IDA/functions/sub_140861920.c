#include "../winhttp.h"

//----- (0000000140861920) ----------------------------------------------------
void __fastcall sub_140861920(__int64 a1, __int64 a2)
{
	int v2; // eax

	v2 = *(unsigned __int16*)(a2 + 16);
	*(_BYTE*)(a1 + 217) = 0;
	*(_DWORD*)(a1 + 68) = v2;
	sub_140872760(a1 + 16, *(float*)(*(_QWORD*)(a1 + 208) + 208i64));
	if (*(_WORD*)(a1 + 106))
	{
		sub_140861600(a1, a2);
	}
	else if (*(_BYTE*)(a1 + 216))
	{
		*(_DWORD*)(a2 + 56) = 17;
	}
}


#include "../winhttp.h"

//----- (0000000140862490) ----------------------------------------------------
__int64 __fastcall sub_140862490(__int64 a1)
{
	__int64 v1; // rcx

	v1 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 176i64);
	if ((*(_BYTE*)(v1 + 19) & 7) != 0)
		return *(unsigned __int16*)(v1 + 16);
	else
		return 1i64;
}


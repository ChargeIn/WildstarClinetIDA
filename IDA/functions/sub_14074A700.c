#include "../winhttp.h"

//----- (000000014074A700) ----------------------------------------------------
__int64 __fastcall sub_14074A700(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // rax

	v2 = sub_140200220(0x28Fu);
	if (v2)
		v3 = *(_DWORD*)(v2 + 4);
	else
		v3 = 40;
	v4 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = (double)v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}


#include "../winhttp.h"

//----- (000000014082A0A0) ----------------------------------------------------
__int64 __fastcall sub_14082A0A0(__int64 a1, int a2)
{
	_DWORD* v2; // rax
	_DWORD* v3; // rcx
	_DWORD* v4; // rax

	v2 = *(_DWORD**)a1;
	v3 = *(_DWORD**)(a1 + 8);
	if (v2 == v3)
		return 0i64;
	do
	{
		if (*v2 == a2)
			break;
		v2 += 4;
	} while (v2 != v3);
	if (v2 == v3)
		return 0i64;
	v4 = v2 + 2;
	if (!v4)
		return 0i64;
	else
		return *(unsigned int*)(*(_QWORD*)v4 + 4i64);
}


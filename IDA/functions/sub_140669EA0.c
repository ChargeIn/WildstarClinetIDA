#include "../winhttp.h"

//----- (0000000140669EA0) ----------------------------------------------------
__int64 __fastcall sub_140669EA0(_QWORD* a1)
{
	__int64 v2; // rax
	int* v3; // rdx

	v2 = sub_140056AB0(a1, 1u);
	v3 = (int*)a1[2];
	if (v2)
		*v3 = (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8i64) + 12i64) >> 19) & 1;
	else
		*v3 = 0;
	v3[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}


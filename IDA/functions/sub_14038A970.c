#include "../winhttp.h"

//----- (000000014038A970) ----------------------------------------------------
void __fastcall sub_14038A970(_QWORD* a1)
{
	_QWORD* v2; // rdx
	_QWORD* v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rax

	if (!a1[16])
	{
		v2 = (_QWORD*)*a1;
		v3 = a1 + 17;
		v2 += 307;
		*(v3 - 1) = v2;
		*v3 = *v2;
		*v2 = a1;
		if (*v3)
			*(_QWORD*)(*v3 + 128i64) = v3;
		*(_DWORD*)(*a1 + 2464i64) = 0;
	}
	if (!a1[18])
	{
		v4 = (_QWORD*)(*a1 + 2472i64);
		a1[18] = v4;
		a1[19] = *v4;
		*v4 = a1;
		v5 = a1[19];
		if (v5)
			*(_QWORD*)(v5 + 144) = a1 + 19;
		*(_DWORD*)(*a1 + 2480i64) = 0;
	}
}


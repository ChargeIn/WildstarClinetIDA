#include "../winhttp.h"

//----- (0000000140383510) ----------------------------------------------------
void __fastcall sub_140383510(_QWORD* a1)
{
	_QWORD* v2; // rdx
	_QWORD* v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rax
	_QWORD* v6; // rcx
	__int64 v7; // rax

	*((_DWORD*)a1 + 9) &= ~0x100u;
	*((_DWORD*)a1 + 10) &= ~1u;
	*((_DWORD*)a1 + 11) &= ~1u;
	if (!a1[181])
	{
		v2 = (_QWORD*)*a1;
		v3 = a1 + 182;
		v2 += 285;
		*(v3 - 1) = v2;
		*v3 = *v2;
		*v2 = a1;
		if (*v3)
			*(_QWORD*)(*v3 + 1448i64) = v3;
		*(_DWORD*)(*a1 + 2288i64) = 0;
		++* (_DWORD*)(*a1 + 2164i64);
	}
	if (!a1[183])
	{
		v4 = (_QWORD*)(*a1 + 2296i64);
		a1[183] = v4;
		a1[184] = *v4;
		*v4 = a1;
		v5 = a1[184];
		if (v5)
			*(_QWORD*)(v5 + 1464) = a1 + 184;
		*(_DWORD*)(*a1 + 2304i64) = 0;
		++* (_DWORD*)(*a1 + 2168i64);
	}
	if (!a1[185])
	{
		v6 = (_QWORD*)(*a1 + 2312i64);
		a1[185] = v6;
		a1[186] = *v6;
		*v6 = a1;
		v7 = a1[186];
		if (v7)
			*(_QWORD*)(v7 + 1480) = a1 + 186;
		*(_DWORD*)(*a1 + 2320i64) = 0;
		++* (_DWORD*)(*a1 + 2172i64);
	}
}


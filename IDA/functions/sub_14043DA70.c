#include "../winhttp.h"

//----- (000000014043DA70) ----------------------------------------------------
_DWORD* __fastcall sub_14043DA70(_DWORD* a1, __int64 a2)
{
	_QWORD* v3; // rcx

	v3 = a1 + 4;
	*((_DWORD*)v3 - 4) = *(_DWORD*)a2;
	*((_DWORD*)v3 - 3) = *(_DWORD*)(a2 + 4);
	*((_DWORD*)v3 - 2) = *(_DWORD*)(a2 + 8);
	v3[1] = 0i64;
	v3[2] = 0i64;
	v3[3] = 0i64;
	sub_14001C1B0(v3, *(int**)(a2 + 24), *(_QWORD*)(a2 + 32));
	a1[12] = *(_DWORD*)(a2 + 48);
	a1[13] = *(_DWORD*)(a2 + 52);
	a1[14] = *(_DWORD*)(a2 + 56);
	a1[15] = *(_DWORD*)(a2 + 60);
	a1[16] = *(_DWORD*)(a2 + 64);
	a1[17] = *(_DWORD*)(a2 + 68);
	a1[18] = *(_DWORD*)(a2 + 72);
	a1[19] = *(_DWORD*)(a2 + 76);
	a1[20] = *(_DWORD*)(a2 + 80);
	return a1;
}


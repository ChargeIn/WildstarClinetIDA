#include "../winhttp.h"

//----- (00000001406CC280) ----------------------------------------------------
_DWORD* __fastcall sub_1406CC280(_QWORD* a1, _DWORD* a2)
{
	int v2; // r8d
	bool v3; // zf
	int v4; // eax

	v2 = 0;
	*a2 = 200;
	if (a1[200])
		v2 = 20;
	v3 = a1[203] == 0i64;
	v4 = v2 + 36 * (*((_DWORD*)a1 + 400) + 2);
	a2[1] = v4;
	if (!v3 || a1[202])
		a2[1] = v4 + 22;
	return a2;
}


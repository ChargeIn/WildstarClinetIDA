#include "../winhttp.h"

//----- (0000000140273470) ----------------------------------------------------
__int64 __fastcall sub_140273470(_DWORD* a1, _DWORD* a2)
{
	__int64 result; // rax

	a1[2600] = *a2;
	a1[2601] = a2[1];
	a1[2602] = a2[2];
	a1[2603] = a2[3];
	a1[2604] = a2[4];
	result = (unsigned int)a2[5];
	a1[2606] = 1;
	a1[2605] = result;
	return result;
}


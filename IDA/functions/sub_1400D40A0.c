#include "../winhttp.h"

//----- (00000001400D40A0) ----------------------------------------------------
bool __fastcall sub_1400D40A0(__int64 a1)
{
	__int64 v1; // rax

	v1 = *(_QWORD*)(a1 + 32);
	return v1 && *(_QWORD*)(v1 + 2880) == a1;
}


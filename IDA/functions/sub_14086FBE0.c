#include "../winhttp.h"

//----- (000000014086FBE0) ----------------------------------------------------
void __fastcall sub_14086FBE0(__int64 a1)
{
	__int64 i; // rbx

	for (i = *(_QWORD*)(a1 + 168); i != *(_QWORD*)(a1 + 176); i += 16i64)
		sub_1408567B0(*(_QWORD*)(i + 8));
}


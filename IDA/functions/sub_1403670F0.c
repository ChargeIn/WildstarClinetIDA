#include "../winhttp.h"

//----- (00000001403670F0) ----------------------------------------------------
int __fastcall sub_1403670F0(__int64 a1, __int64 a2)
{
	int* v3; // rax
	__int64* v4; // rax

	v3 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
	v4 = (__int64*)sub_14035BF90(a2, v3);
	if (v4)
		LODWORD(v4) = sub_140383310(v4);
	return (int)v4;
}


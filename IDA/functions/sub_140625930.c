#include "../winhttp.h"

//----- (0000000140625930) ----------------------------------------------------
void __fastcall sub_140625930(__int64 a1)
{
	__int64 v2; // rcx

	if (*(_QWORD*)(a1 + 1088))
		sub_140195D70(a1 + 1072);
	if (*(_QWORD*)(a1 + 1160))
		sub_140195D70(a1 + 1144);
	if (*(_QWORD*)(a1 + 1232))
		sub_140195D70(a1 + 1216);
	if (*(_QWORD*)(a1 + 1304))
		sub_140195D70(a1 + 1288);
	if (*(_QWORD*)(a1 + 1376))
		sub_140195D70(a1 + 1360);
	if (*(_QWORD*)(a1 + 48) || *(_QWORD*)(a1 + 56) || *(_QWORD*)(a1 + 136) || *(_QWORD*)(a1 + 96))
		sub_14061A140(a1, 1);
	if (*(_DWORD*)(a1 + 968) == 3)
		sub_140620D70(a1);
	v2 = *(_QWORD*)(a1 + 1632);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 72i64))(v2);
}


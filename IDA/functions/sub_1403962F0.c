#include "../winhttp.h"

//----- (00000001403962F0) ----------------------------------------------------
__int64 __fastcall sub_1403962F0(__int64 a1)
{
	__int64 v1; // rcx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 40);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 160i64))(v1);
	return result;
}


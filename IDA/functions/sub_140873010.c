#include "../winhttp.h"

//----- (0000000140873010) ----------------------------------------------------
__int64 __fastcall sub_140873010(__int64 a1)
{
	__int64 v2; // rcx

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56));
	v2 = *(_QWORD*)(a1 + 8);
	*(_BYTE*)(a1 + 44) = 0;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 48i64))(v2);
}


#include "../winhttp.h"

//----- (000000014026F920) ----------------------------------------------------
__int64 __fastcall sub_14026F920(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 8i64 * *(int*)(a1 + 7140) + 7096);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 96i64))(v2);
	return (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 832i64))(
		*(_QWORD*)(a1 + 6608),
		*(_QWORD*)(a1 + 8i64 * *(int*)(a1 + 7140) + 7096));
}


#include "../winhttp.h"

//----- (0000000140444550) ----------------------------------------------------
_BOOL8 __fastcall sub_140444550(__int64 a1, int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v2 = *(_QWORD*)(a1 + 88);
	v3 = (*(__int64(__fastcall**)(int*))(v2 + 24))(&v6);
	v4 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8 * (v3 % *(_QWORD*)(v2 + 8)));
	if (!v4)
		return 0i64;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 32))(&v6, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return 0i64;
	}
	return v4 != (_QWORD*)-24i64;
}


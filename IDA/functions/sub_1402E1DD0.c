#include "../winhttp.h"

//----- (00000001402E1DD0) ----------------------------------------------------
void __fastcall sub_1402E1DD0(__int64 a1, __int64 a2)
{
	_DWORD* v3; // rax
	__int64 v4; // rax

	if (*(_QWORD*)(a2 + 160))
	{
		v3 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
		v4 = sub_1402E16D0(a2, v3);
		if (v4)
			(*(void(__fastcall**)(__int64, _QWORD))(a2 + 160))(v4, *(_QWORD*)(a2 + 224));
	}
}


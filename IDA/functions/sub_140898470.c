#include "../winhttp.h"

//----- (0000000140898470) ----------------------------------------------------
bool __fastcall sub_140898470(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	bool v4; // [rsp+30h] [rbp+8h] BYREF

	v1 = 0i64;
	if (*(_BYTE*)(a1 + 200))
	{
		v2 = *(_QWORD*)(a1 + 136);
		v1 = sub_140898620(a1, &v4);
		if (v1 == v2)
			v1 = 0i64;
	}
	return v1 != 0;
}


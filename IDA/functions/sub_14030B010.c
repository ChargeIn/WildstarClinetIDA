#include "../winhttp.h"

//----- (000000014030B010) ----------------------------------------------------
__int64 __fastcall sub_14030B010(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	__int64 v6; // r9
	__int64 result; // rax
	unsigned int v8; // r8d
	__int64 v9; // rcx
	unsigned int v10; // ebx
	__int64 v11; // rax
	__int64 v12; // rbp

	v3 = *(_QWORD*)(a3 + 40);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v8 = *(_DWORD*)(a3 + 32);
	v9 = 296i64 * v8;
	if ((unsigned __int64)(a2 + v9 + v3) > a1[1])
		return 2147500037i64;
	v10 = 0;
	v11 = 0i64;
	if (v8)
		v11 = v6;
	v12 = v11 + ((v9 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	*(_QWORD*)(a3 + 40) = v11;
	if (!v8)
		return 0i64;
	while (1)
	{
		result = sub_14030A9D0(a1, v12, (unsigned int*)(a1[2] + *(_QWORD*)(a3 + 40) + 296i64 * v10));
		if ((int)result < 0)
			break;
		if (++v10 >= *(_DWORD*)(a3 + 32))
			return 0i64;
	}
	return result;
}


#include "../winhttp.h"

//----- (000000014030EFA0) ----------------------------------------------------
__int64 __fastcall sub_14030EFA0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rax
	__int64 v6; // r8
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rdi
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // r10
	__int64 v17; // rax

	v3 = *((_QWORD*)a3 + 1);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v8 = *a3;
	if ((unsigned __int64)(a2 + 48 * v8 + v3) > a1[1])
		return 2147500037i64;
	v9 = 0i64;
	if ((_DWORD)v8)
		v9 = v6;
	v10 = 0i64;
	*((_QWORD*)a3 + 1) = v9;
	v11 = v9 + ((48 * v8 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	if (!(_DWORD)v8)
		return 0i64;
	while (1)
	{
		v12 = *((_QWORD*)a3 + 1);
		v13 = a1[2] + 48 * v10;
		v14 = *(_QWORD*)(v13 + v12 + 40);
		v15 = v14 + v11;
		if ((unsigned __int64)(v14 + v11) < *a1)
			break;
		v16 = *(unsigned int*)(v13 + v12 + 32);
		if ((unsigned __int64)(v11 + v14 + 2 * v16) > a1[1])
			break;
		v17 = 0i64;
		if ((_DWORD)v16)
			v17 = v15;
		v10 = (unsigned int)(v10 + 1);
		*(_QWORD*)(v13 + v12 + 40) = v17;
		if ((unsigned int)v10 >= *a3)
			return 0i64;
	}
	return 2147500037i64;
}


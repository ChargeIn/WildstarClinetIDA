#include "../winhttp.h"

//----- (000000014048F880) ----------------------------------------------------
_BOOL8 __fastcall sub_14048F880(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // r8
	__int64 v6; // r9
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v11; // [rsp+8h] [rbp+8h]
	__int64 v12; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C65948 + 16);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v11 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v11 = *(_QWORD*)(qword_140C65948 + 16);
	if (v11 == v2)
		return 0i64;
	v5 = *(_QWORD*)(v11 + 40);
	if (!v5)
		return 0i64;
	v6 = *(_QWORD*)(qword_140C65948 + 48);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a2)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v12 = v7, a2 < *(_DWORD*)(v7 + 32)))
		v12 = *(_QWORD*)(qword_140C65948 + 48);
	if (v12 == v6)
		return 0i64;
	v9 = *(_QWORD*)(v12 + 40);
	return v9 && !*(_DWORD*)(v5 + 4) && (*(_DWORD*)(v5 + 12) & 0x140) == 0 && *(_DWORD*)(v9 + 24) > 1u;
}
// 140C65948: using guessed type __int64 qword_140C65948;


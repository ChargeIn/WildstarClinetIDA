#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A9DB0) ----------------------------------------------------
__int64 __fastcall sub_1400A9DB0(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	bool v4; // dl
	__int64 v6; // rcx
	_BOOL8 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	unsigned __int64 v12; // rdx
	unsigned int v13; // ebx
	__int64 v14; // rcx
	unsigned __int64 v15; // r9
	_QWORD* v16; // rdx
	__int64 v17; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_DWORD*)a2 != 0;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= v7 << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = (unsigned __int64)v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 1ui64);
		if ((int)result < 0)
			return result;
	}
	v11 = *(_QWORD*)(a1 + 8);
	v12 = *(unsigned int*)(a2 + 4);
	v13 = 0;
	if (v11
		&& (v14 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 32)) - v14) >= 0x40))
	{
		v15 = (unsigned int)v12;
		v16 = *(_QWORD**)(v11 + 32);
		*v16 &= (1i64 << v14) - 1;
		*v16 |= (unsigned __int64)(unsigned int)v15 << *(_QWORD*)(a1 + 16);
		v17 = *(_QWORD*)(a1 + 16);
		if (((v17 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = v15 >> (64 - (unsigned __int8)v17);
		*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
		result = 0i64;
	}
	else
	{
		result = sub_140336470(a1, v12, 0x20ui64);
		if ((int)result < 0)
			return result;
	}
	if (*(_DWORD*)(a2 + 4))
	{
		do
		{
			result = sub_1400A9540(a1, *(_QWORD*)(a2 + 8) + 104i64 * v13);
			if ((int)result < 0)
				break;
			++v13;
		} while (v13 < *(_DWORD*)(a2 + 4));
	}
	return result;
}


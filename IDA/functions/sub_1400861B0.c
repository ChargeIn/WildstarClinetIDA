#include "../winhttp.h"

//----- (00000001400861B0) ----------------------------------------------------
__int64 __fastcall sub_1400861B0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r8
	unsigned __int64 v6; // rdx
	__int64 v7; // rcx
	unsigned __int64 v8; // r9
	_QWORD* v9; // rdx
	__int64 v10; // rcx
	unsigned int v11; // edi
	__int64 v12; // r8
	bool v13; // dl
	__int64 v14; // rcx
	_BOOL8 v15; // r9
	_QWORD* v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // r8
	unsigned __int16 v19; // dx
	__int64 v20; // rcx
	unsigned __int64 v21; // r9
	_QWORD* v22; // rdx
	__int64 v23; // rdx

	result = sub_140336040(a1, *(unsigned __int16**)a2);
	if ((int)result >= 0)
	{
		v5 = *(_QWORD*)(a1 + 8);
		v6 = *(unsigned int*)(a2 + 8);
		if (v5
			&& (v7 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v7) >= 0x40))
		{
			v8 = (unsigned int)v6;
			v9 = *(_QWORD**)(v5 + 32);
			*v9 &= (1i64 << v7) - 1;
			*v9 |= (v8 & 0x1F) << *(_QWORD*)(a1 + 16);
			v10 = *(_QWORD*)(a1 + 16);
			if (((v10 + 12) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = v8 >> (64 - (unsigned __int8)v10);
			*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 5i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 3) & 7;
		}
		else
		{
			result = sub_140336470(a1, v6, 5ui64);
			if ((int)result < 0)
				return result;
		}
		v11 = 0;
		if (*(_DWORD*)(a2 + 8))
		{
			while (1)
			{
				result = sub_140085AF0(a1, (int*)(*(_QWORD*)(a2 + 16) + 104i64 * v11));
				if ((int)result < 0)
					break;
				if (++v11 >= *(_DWORD*)(a2 + 8))
					goto LABEL_11;
			}
		}
		else
		{
		LABEL_11:
			v12 = *(_QWORD*)(a1 + 8);
			v13 = *(_DWORD*)(a2 + 24) != 0;
			if (v12
				&& (v14 = *(_QWORD*)(a1 + 16),
					(unsigned __int64)(8i64 * (*(_QWORD*)(v12 + 24) - *(_QWORD*)(v12 + 32)) - v14) >= 0x40))
			{
				v15 = v13;
				v16 = *(_QWORD**)(v12 + 32);
				*v16 &= (1i64 << v14) - 1;
				*v16 |= v15 << *(_QWORD*)(a1 + 16);
				v17 = *(_QWORD*)(a1 + 16);
				if (((v17 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v12 + 32) + 8i64) = (unsigned __int64)v15 >> (64 - (unsigned __int8)v17);
				*(_QWORD*)(v12 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
				*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
			}
			else
			{
				result = sub_140336470(a1, v13, 1ui64);
				if ((int)result < 0)
					return result;
			}
			v18 = *(_QWORD*)(a1 + 8);
			v19 = *(_WORD*)(a2 + 28);
			if (v18
				&& (v20 = *(_QWORD*)(a1 + 16),
					(unsigned __int64)(8i64 * (*(_QWORD*)(v18 + 24) - *(_QWORD*)(v18 + 32)) - v20) >= 0x40))
			{
				v21 = v19;
				v22 = *(_QWORD**)(v18 + 32);
				*v22 &= (1i64 << v20) - 1;
				*v22 |= (unsigned __int64)(unsigned int)v21 << *(_QWORD*)(a1 + 16);
				v23 = *(_QWORD*)(a1 + 16);
				if (((v23 + 23) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
					*(_BYTE*)(*(_QWORD*)(v18 + 32) + 8i64) = v21 >> (64 - (unsigned __int8)v23);
				*(_QWORD*)(v18 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 16i64) >> 3;
				*(_QWORD*)(a1 + 16) &= 7ui64;
				return 0i64;
			}
			else
			{
				return sub_140336470(a1, v19, 0x10ui64);
			}
		}
	}
	return result;
}


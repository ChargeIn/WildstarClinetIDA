#include "../winhttp.h"

//----- (0000000140927AB0) ----------------------------------------------------
__int64 __fastcall sub_140927AB0(__int64 a1, int a2)
{
	unsigned int* v2; // rbx
	char* v5; // rax
	__int64 v6; // r8
	__int64 v7; // rax
	_QWORD* v8; // rsi
	_QWORD* v9; // rbp
	_QWORD* v10; // rax
	_QWORD* v11; // rax
	_QWORD* v12; // rdi
	char* v13; // rax
	_QWORD* v14; // rax
	__int64 v16; // [rsp+28h] [rbp-30h]

	v2 = *(unsigned int**)a1;
	if (!**(_DWORD**)a1)
	{
		v16 = *(int*)(a1 + 36) + 56i64;
		v2[26] = 0;
		v5 = sub_14092D140((__int64)v2, 1, 8, 0i64, 267, v16);
		if (v5)
			*v5 = -117;
		if (!*v2)
		{
			v6 = *(int*)(a1 + 36) + 56i64;
			v2[26] = 0;
			sub_14092AA10(v2, 267, v6, 6, 0i64);
			if (!*v2)
			{
				v2[26] = 0;
				sub_14092AA10(v2, 1, 0i64, 9, 0i64);
			}
		}
	}
	v7 = *(int*)(a1 + 60);
	if ((_DWORD)v7)
	{
		if (*v2)
			goto LABEL_12;
		v2[26] = 0;
		sub_14092AA10(v2, 3, 0i64, 267, v7 + 48);
	}
	if (!*v2)
	{
		v2[26] = 0;
		sub_14092AEE0(v2, 1, 2, 0i64, 257, 0x38ui64);
	}
LABEL_12:
	if (*(_DWORD*)(a1 + 60))
		sub_140932690(v2, 6, 257, 48i64, 3, 0i64);
	sub_140932A90(v2, 27, 3, 0i64, 257, 32i64, 512, 4i64);
	if (!*v2)
	{
		v2[26] = 0;
		sub_14092AA10(v2, 1, 0i64, 257, 16i64);
	}
	sub_1409337F0(v2, 6, 0i64, *(int*)(a1 + 36));
	v8 = sub_140931B80(v2, 0, 2, 0i64, 512, 0i64);
	v9 = sub_140932570((__int64)v2);
	sub_140932A90(v2, 27, 7, 0i64, 262, 0i64, 1, 0i64);
	sub_140932A90(v2, 25, 6, 0i64, 6, 0i64, 512, 8i64);
	sub_140932A90(v2, 35, 7, 0i64, 7, 0i64, 512, 1i64);
	sub_140932690(v2, 20, 259, 4i64, 7, 0i64);
	sub_140932A90(v2, 539, 2, 0i64, 2, 0i64, 512, 1i64);
	v10 = sub_140932450((__int64)v2, 1);
	if (v10 && v9)
	{
		v10[2] &= ~2ui64;
		v10[2] |= 1ui64;
		v10[3] = v9;
	}
	v11 = sub_140932570((__int64)v2);
	if (v8 && v11)
	{
		v8[2] &= ~2ui64;
		v8[2] |= 1ui64;
		v8[3] = v11;
	}
	if (a2 <= 1)
		return sub_140932690(v2, 6, 1, 0i64, 512, 1i64);
	sub_1409337F0(v2, 1, 0i64, *(int*)(a1 + 36) + 16i64 * a2);
	sub_140932690(v2, 6, 2, 0i64, 512, a2 + 1);
	v12 = sub_140932570((__int64)v2);
	if (!*v2)
	{
		v2[26] = 0;
		v13 = sub_14092D140((__int64)v2, 1, 1, 0i64, 257, -16i64);
		if (v13)
		{
			*v13 = -115;
			sub_14092AA10(v2, 3, 0i64, 257, 0i64);
		}
	}
	sub_140932A90(v2, 27, 2, 0i64, 2, 0i64, 512, 1i64);
	v14 = sub_140931B80(v2, 0, 3, 0i64, 8, 0i64);
	if (v14)
	{
		if (v12)
		{
			v14[2] &= ~2ui64;
			v14[2] |= 1ui64;
			v14[3] = v12;
		}
	}
	return sub_140932690(v2, 6, 1, 0i64, 2, 0i64);
}


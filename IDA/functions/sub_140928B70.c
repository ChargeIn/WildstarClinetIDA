#include "../winhttp.h"

//----- (0000000140928B70) ----------------------------------------------------
__int64 __fastcall sub_140928B70(__int64 a1)
{
	unsigned int* v1; // rbx
	char* v3; // rax
	__int64 v4; // rax
	_QWORD* v5; // rsi
	char* v6; // rax
	char* v7; // rax
	_QWORD* v8; // rdi
	_QWORD* v9; // rax
	_QWORD* v10; // rdi
	_QWORD* v11; // rax
	_QWORD* v12; // rdi
	_QWORD* v13; // rax
	_QWORD* v14; // rax

	v1 = *(unsigned int**)a1;
	sub_140931FA0(*(unsigned int**)a1, 4, 0i64);
	sub_140932A90(v1, 27, 6, 0i64, 6, 0i64, 3, 0i64);
	if (!*v1)
	{
		v1[26] = 0;
		v3 = sub_14092D140((__int64)v1, 1, 8, 0i64, 5, 0i64);
		if (v3)
			*v3 = -119;
		if (!*v1)
		{
			v1[26] = 0;
			sub_14092AA10(v1, 267, 48i64, 7, 0i64);
			if (!*v1)
			{
				v1[26] = 0;
				sub_14092AA10(v1, 267, 56i64, 2, 0i64);
			}
		}
	}
	v4 = *(_QWORD*)(a1 + 72);
	if (!*v1)
	{
		v1[26] = 0;
		sub_14092AA10(v1, 8, 0i64, 512, v4);
	}
	sub_140932A90(v1, 27, 1, 0i64, 1, 0i64, 512, 2i64);
	sub_140932A90(v1, 27, 6, 0i64, 6, 0i64, 512, 2i64);
	v5 = sub_140932570((__int64)v1);
	if (!*v1)
	{
		v1[26] = 0;
		v6 = sub_14092D140((__int64)v1, 1, 1, 0i64, 257, 2i64);
		if (v6)
		{
			*v6 = -115;
			sub_14092AD90(v1, 0, 7, 0i64, 257, 0i64);
		}
		if (!*v1)
		{
			v1[26] = 0;
			v7 = sub_14092D140((__int64)v1, 1, 6, 0i64, 262, 2i64);
			if (v7)
			{
				*v7 = -115;
				sub_14092AD90(v1, 0, 2, 0i64, 262, 0i64);
			}
		}
	}
	v8 = sub_140931B80(v1, 4, 7, 0i64, 512, 255i64);
	sub_140932690(v1, 7, 7, 0i64, 376, 0i64);
	v9 = sub_140932570((__int64)v1);
	if (v8 && v9)
	{
		v8[2] &= ~2ui64;
		v8[2] |= 1ui64;
		v8[3] = v9;
	}
	v10 = sub_140931B80(v1, 4, 2, 0i64, 512, 255i64);
	sub_140932690(v1, 7, 2, 0i64, 296, 0i64);
	v11 = sub_140932570((__int64)v1);
	if (v10 && v11)
	{
		v10[2] &= ~2ui64;
		v10[2] |= 1ui64;
		v10[3] = v11;
	}
	v12 = sub_140931B80(v1, 1, 7, 0i64, 2, 0i64);
	sub_140932A90(v1, 539, 3, 0i64, 3, 0i64, 512, 2i64);
	v13 = sub_140932450((__int64)v1, 1);
	if (v13 && v5)
	{
		v13[2] &= ~2ui64;
		v13[2] |= 1ui64;
		v13[3] = v5;
	}
	v14 = sub_140932570((__int64)v1);
	if (v12 && v14)
	{
		v12[2] &= ~2ui64;
		v12[2] |= 1ui64;
		v12[3] = v14;
	}
	sub_140932A90(v1, 25, 6, 0i64, 6, 0i64, 512, 2i64);
	sub_140932690(v1, 6, 8, 0i64, 5, 0i64);
	sub_140932690(v1, 6, 7, 0i64, 267, 0i64);
	sub_140932690(v1, 6, 2, 0i64, 267, 8i64);
	return sub_1409320B0(v1, 4, 0i64);
}


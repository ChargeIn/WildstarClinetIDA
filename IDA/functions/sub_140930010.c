#include "../winhttp.h"

//----- (0000000140930010) ----------------------------------------------------
_QWORD* __fastcall sub_140930010(__int64 a1, int a2, int a3)
{
	unsigned int* v3; // rbx
	_QWORD* v5; // r13
	_QWORD* v6; // rdi
	_QWORD* v7; // r15
	int v8; // r12d
	char* v9; // rax
	_QWORD* v10; // rbp
	_QWORD* v11; // rax
	_QWORD* v12; // rax
	_QWORD* v13; // rax
	_QWORD* v14; // rbp
	__int64 v15; // r8
	_QWORD* v16; // rax
	_QWORD* v17; // rax
	__int64 v18; // r8
	_QWORD* v19; // rax
	__int64* v20; // rcx
	_QWORD* i; // rdx
	__int64 v22; // rax
	_QWORD* v23; // rbp
	_QWORD* v24; // r14
	_QWORD* v25; // rax
	_QWORD* v26; // rsi
	_QWORD* v27; // rax
	_QWORD* v28; // rax
	_QWORD* v29; // rax
	_QWORD* v30; // rax
	__int64* v32; // [rsp+70h] [rbp+8h] BYREF

	v3 = *(unsigned int**)a1;
	v5 = 0i64;
	v6 = 0i64;
	v7 = 0i64;
	v32 = 0i64;
	v8 = 0;
	if (a2)
	{
		if (!a3)
			goto LABEL_38;
	}
	else if (!a3)
	{
		if ((unsigned int)(*(_DWORD*)(a1 + 84) - 1) <= 1 || *(int*)(a1 + 88) > 255)
			v8 = 1;
		goto LABEL_38;
	}
	if (!*v3)
	{
		v3[26] = 0;
		v9 = sub_14092D140((__int64)v3, 1, 6, 0i64, 5, 0i64);
		if (v9)
			*v9 = -119;
	}
	if (*(_DWORD*)(a1 + 84) || *(int*)(a1 + 88) <= 255)
	{
		v6 = sub_140931B80(v3, 3, 6, 0i64, 7, 0i64);
		v14 = sub_140932570((__int64)v3);
		if (!*v3)
		{
			v15 = *(int*)(a1 + 56) + 48i64;
			v3[26] = 0;
			sub_14092AA10(v3, 267, v15, 6, 0i64);
		}
		sub_1409309E0(a1);
		sub_14091C090(a1, *(_DWORD*)(a1 + 84), &v32, 1);
		v16 = sub_140931B80(v3, 2, 6, 0i64, 7, 0i64);
		if (v16 && v14)
		{
			v16[2] &= ~2ui64;
			v16[2] |= 1ui64;
			v16[3] = v14;
		}
		v17 = sub_140932570((__int64)v3);
		if (v6 && v17)
		{
			v6[2] &= ~2ui64;
			v6[2] |= 1ui64;
			v6[3] = v17;
		}
		if (!*v3)
		{
			v18 = *(int*)(a1 + 56) + 48i64;
			v3[26] = 0;
			sub_14092AA10(v3, 267, v18, 6, 0i64);
		}
		v19 = sub_140932570((__int64)v3);
		v20 = v32;
		for (i = v19; v20; v20 = (__int64*)v20[1])
		{
			v22 = *v20;
			if (*v20 && i)
			{
				*(_QWORD*)(v22 + 16) &= ~2ui64;
				*(_QWORD*)(v22 + 16) |= 1ui64;
				*(_QWORD*)(v22 + 24) = i;
			}
		}
	}
	else
	{
		v10 = sub_140932570((__int64)v3);
		sub_140932A90(v3, 25, 6, 0i64, 6, 0i64, 512, 2i64);
		v6 = sub_140931B80(v3, 3, 6, 0i64, 7, 0i64);
		sub_140932690(v3, 9, 1, 0i64, 262, -2i64);
		sub_140932690(v3, 9, 3, 0i64, 262, 0i64);
		v11 = sub_140931B80(v3, 1, 1, 0i64, 512, (unsigned __int8)BYTE1(*(_DWORD*)(a1 + 88)));
		if (v11 && v10)
		{
			v11[2] &= ~2ui64;
			v11[2] |= 1ui64;
			v11[3] = v10;
		}
		v12 = sub_140931B80(v3, 1, 3, 0i64, 512, *(unsigned __int8*)(a1 + 88));
		if (v12 && v10)
		{
			v12[2] &= ~2ui64;
			v12[2] |= 1ui64;
			v12[3] = v10;
		}
		v13 = sub_140932570((__int64)v3);
		if (v6 && v13)
		{
			v6[2] &= ~2ui64;
			v6[2] |= 1ui64;
			v6[3] = v13;
		}
		sub_140932A90(v3, 27, 267, *(int*)(a1 + 56), 6, 0i64, 512, 2i64);
	}
	sub_140932690(v3, 6, 6, 0i64, 5, 0i64);
LABEL_38:
	v23 = sub_140932450((__int64)v3, 22);
	if (v8)
	{
		v5 = sub_140932570((__int64)v3);
		sub_140932A90(v3, 25, 6, 0i64, 6, 0i64, 512, 2i64);
		v6 = sub_140931B80(v3, 3, 6, 0i64, 7, 0i64);
		sub_140932690(v3, 9, 1, 0i64, 262, 0i64);
		sub_140932A90(v3, 539, 0, 0i64, 1, 0i64, 512, *(unsigned __int8*)(a1 + 88));
		sub_140932FC0(v3, 6, 1, 0i64, 0, 0, 0);
		sub_140932A90(v3, 33, 1, 0i64, 1, 0i64, 512, 1i64);
		sub_140932A90(v3, 25, 6, 0i64, 6, 0i64, 1, 0i64);
		v7 = sub_140932450((__int64)v3, 22);
	}
	v24 = sub_140932570((__int64)v3);
	if (v8 || *(_DWORD*)(a1 + 316))
	{
		sub_140932690(v3, 9, 1, 0i64, 262, 0i64);
		if (v8)
		{
			v25 = sub_140931B80(v3, 0, 1, 0i64, 512, (unsigned __int8)BYTE1(*(_DWORD*)(a1 + 88)));
			if (v25)
			{
				if (v5)
				{
					v25[2] &= ~2ui64;
					v25[2] |= 1ui64;
					v25[3] = v5;
				}
			}
		}
	}
	sub_140932A90(v3, 25, 6, 0i64, 6, 0i64, 512, 2i64);
	if (*(_DWORD*)(a1 + 316))
	{
		v26 = sub_140931B80(v3, 2, 1, 0i64, 512, 55296i64);
		sub_140932A90(v3, 30, 1, 0i64, 1, 0i64, 512, 64512i64);
		sub_140932A90(v3, 539, 0, 0i64, 1, 0i64, 512, 55296i64);
		sub_140932FC0(v3, 6, 1, 0i64, 0, 0, 0);
		sub_140932A90(v3, 33, 1, 0i64, 1, 0i64, 512, 1i64);
		sub_140932A90(v3, 25, 6, 0i64, 6, 0i64, 1, 0i64);
		v27 = sub_140932570((__int64)v3);
		if (v26)
		{
			if (v27)
			{
				v26[2] &= ~2ui64;
				v26[2] |= 1ui64;
				v26[3] = v27;
			}
		}
	}
	v28 = sub_140932570((__int64)v3);
	if (v23 && v28)
	{
		v23[2] &= ~2ui64;
		v23[2] |= 1ui64;
		v23[3] = v28;
	}
	if (v8)
	{
		v29 = sub_140932570((__int64)v3);
		if (v6 && v29)
		{
			v6[2] &= ~2ui64;
			v6[2] |= 1ui64;
			v6[3] = v29;
		}
		v30 = sub_140932570((__int64)v3);
		if (v7 && v30)
		{
			v7[2] &= ~2ui64;
			v7[2] |= 1ui64;
			v7[3] = v30;
		}
	}
	return v24;
}


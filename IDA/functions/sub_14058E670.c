#include "../winhttp.h"

//----- (000000014058E670) ----------------------------------------------------
void __fastcall sub_14058E670(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	__int16* v4; // rax
	__int64* v5; // r15
	int* v6; // rbp
	__int64 v7; // rax
	__int64 v9; // rdi
	int* v10; // rdi
	__int64 v11; // rax
	int* v12; // rsi
	__int64 v13; // r14
	__int64 v14; // rcx
	__int64 v15; // rdi
	__int64 v16; // rsi
	__int16* v17; // rax
	__int64 j; // rbx
	__int64 v19; // rcx
	int v20; // ebx
	__int64 v21; // rax
	__int64 i; // rbx
	__int64 v23; // rcx
	char v24[8]; // [rsp+30h] [rbp-88h] BYREF
	int* v25; // [rsp+38h] [rbp-80h]
	__int64 v27; // [rsp+48h] [rbp-70h]
	char v28[8]; // [rsp+50h] [rbp-68h] BYREF
	int* v29; // [rsp+58h] [rbp-60h]
	__int64 v31; // [rsp+68h] [rbp-50h]
	char v32[8]; // [rsp+70h] [rbp-48h] BYREF
	__int64 v33; // [rsp+78h] [rbp-40h]
	__int64 v34; // [rsp+80h] [rbp-38h]

	v2 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
		if (*(_DWORD*)(v3 + 16) == 3)
			break;
		if (++v2 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	v5 = *(__int64**)(qword_140C7DE18 + 8 * v2);
	if (!v3)
	{
	LABEL_4:
		v4 = sub_14034BDD0(a1, 282577);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v4, 0, 0i64);
		return;
	}
	v6 = 0i64;
	v25 = 0i64;
	v27 = 0i64;
	v7 = 0i64;
	while (asc_140B1F500[++v7] != 0)
		;
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v9 + 1), 0);
		v25 = v6;
		v27 = (__int64)v6 + 2 * v9 + 2;
	}
	sub_1407DB590(v6, (int*)L" \t\r\n", 2 * v9);
	if ((int*)((char*)v6 + 2 * v9))
		*((_WORD*)v6 + v9) = 0;
	v10 = *(int**)(a1 + 8);
	v11 = 0i64;
	v29 = 0i64;
	v12 = 0i64;
	v31 = 0i64;
	if (*(_WORD*)v10)
	{
		do
			++v11;
		while (*((_WORD*)v10 + v11));
	}
	v13 = (2 * v11) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v12 = sub_14018B280(2 * (v13 + 1), 0);
		v29 = v12;
		v31 = (__int64)v12 + 2 * v13 + 2;
	}
	sub_1407DB590(v12, v10, 2 * v13);
	if ((int*)((char*)v12 + 2 * v13))
		*((_WORD*)v12 + v13) = 0;
	sub_14018F570((__int64)v32, (__int64)v28, (__int64)v24, 34, 92);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v15 = v34;
	v16 = v33;
	if ((unsigned __int64)((v34 - v33) >> 5) >= 2)
	{
		v20 = sub_14018E820(*(WCHAR**)(v33 + 8));
		v21 = sub_14018E8F0(*(WCHAR**)(v16 + 40));
		sub_14057FA20(v5, v20 - 1, v21);
		for (i = v16; i != v15; i += 32i64)
		{
			v23 = *(_QWORD*)(i + 8);
			if (v23)
				sub_14018B900(v23, 0);
		}
		goto LABEL_28;
	}
	v17 = sub_14034BDD0(v14, 326780);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v17, 0, 0i64);
	for (j = v16; j != v15; j += 32i64)
	{
		v19 = *(_QWORD*)(j + 8);
		if (v19)
			sub_14018B900(v19, 0);
	}
	if (v16)
		LABEL_28:
	sub_14018B900(v16, 0);
}
// 14058E88C: variable 'v14' is possibly undefined
// 140B1F500: using guessed type wchar_t asc_140B1F500[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 14058E670: using guessed type char var_88[8];
// 14058E670: using guessed type char var_68[8];
// 14058E670: using guessed type char var_48[8];


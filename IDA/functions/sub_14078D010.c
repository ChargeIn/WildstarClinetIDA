#include "../winhttp.h"

//----- (000000014078D010) ----------------------------------------------------
__int64 __fastcall sub_14078D010(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v2; // rdx
	int v4; // ebp
	_DWORD* v5; // rcx
	int v6; // r13d
	__int64 v7; // r14
	_DWORD* v8; // rcx
	int v9; // eax
	int v10; // r15d
	unsigned __int64* v11; // rax
	int v12; // ecx
	unsigned __int64 v13; // r8
	unsigned __int64* v14; // rdx
	_DWORD* v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rcx
	__int64 v18; // rbx
	__int64 v19; // rax
	unsigned __int64 v20; // rdx
	int i; // r8d
	unsigned __int64 v22; // rax
	int v23; // ecx
	unsigned __int64 v24; // rdx
	unsigned __int64 v25; // rdx
	int v26; // r8d
	bool v27; // zf
	unsigned __int64 v28; // rax
	unsigned __int64 v29; // rdx
	__int64 v30; // rbx
	__int64 v31; // rax
	unsigned __int64 v32; // rdx
	int v33; // r8d
	unsigned __int64 v34; // rax
	unsigned __int64 v35; // rdx
	__int64 v36; // rbx
	__int64 v37; // rax
	char* v38; // rdi
	__int64 v39; // rbx
	__int64 v40; // rcx
	__int64 v41; // rax
	__int64 v42; // rax
	int v43; // edx
	int v44; // edx
	char v45; // cl
	__int64 v46; // rbx
	__int64 v47; // rax
	unsigned __int64 v49; // [rsp+30h] [rbp-C8h] BYREF
	int v50; // [rsp+38h] [rbp-C0h]
	char v51[8]; // [rsp+40h] [rbp-B8h] BYREF
	const char* v52; // [rsp+48h] [rbp-B0h]
	_BYTE* v53; // [rsp+50h] [rbp-A8h]
	char* v54; // [rsp+58h] [rbp-A0h]
	unsigned int v55; // [rsp+68h] [rbp-90h]
	unsigned int v56; // [rsp+70h] [rbp-88h]
	char v57[60]; // [rsp+78h] [rbp-80h] BYREF
	int v58; // [rsp+B4h] [rbp-44h]

	v1 = (_DWORD*)a1[3];
	v2 = a1[2];
	v4 = 1;
	if ((unsigned __int64)v1 >= v2 || v1 == dword_140A12138 || v1[2] != 8)
	{
		v6 = 0;
		v7 = (__int64)a1;
	}
	else
	{
		v5 = dword_140A12138;
		v6 = 1;
		if ((unsigned __int64)v1 < v2)
			v5 = v1;
		if (v5[2] == 8)
			v7 = *(_QWORD*)v5;
		else
			v7 = 0i64;
	}
	v8 = sub_1400580E0((__int64)a1, v6 + 2);
	v9 = v8[2];
	if (v9 != 3 && (v9 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v8 + 32i64), &v49)))
	{
		v10 = a1 == (_QWORD*)v7;
		goto LABEL_20;
	}
	v11 = (unsigned __int64*)sub_1400580E0((__int64)a1, v6 + 2);
	v12 = *((_DWORD*)v11 + 2);
	if (v12 != 3)
	{
		if (v12 != 4 || !sub_14005AC80((char*)(*v11 + 32), &v49))
		{
			v10 = 0;
			goto LABEL_19;
		}
		v50 = 3;
		v11 = &v49;
	}
	v10 = (int)*(double*)v11;
LABEL_19:
	a1[2] -= 16i64;
LABEL_20:
	if ((unsigned int)((__int64)(a1[2] - a1[3]) >> 4) == v6)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v13 = 0i64;
		v14 = (unsigned __int64*)&unk_140C65C3E;
	LABEL_30:
		v16 = a1[2];
		*(_QWORD*)v16 = sub_140062650((__int64)a1, v14, v13);
		*(_DWORD*)(v16 + 8) = 4;
		v17 = a1[4];
		a1[2] += 16i64;
		if (*(_QWORD*)(v17 + 120) >= *(_QWORD*)(v17 + 112))
			sub_14005E2C0((__int64)a1);
		v18 = a1[2];
		v19 = sub_140062650((__int64)a1, (unsigned __int64*)aStackTraceback, 0x10ui64);
		*(_DWORD*)(v18 + 8) = 4;
		*(_QWORD*)v18 = v19;
		a1[2] += 16i64;
		while (1)
		{
			v20 = *(_QWORD*)(v7 + 40);
			for (i = v10; i > 0; v20 -= 40i64)
			{
				if (v20 <= *(_QWORD*)(v7 + 80))
					break;
				--i;
				if (!*(_BYTE*)(**(_QWORD**)(v20 + 8) + 10i64))
					i -= *(_DWORD*)(v20 + 36);
			}
			if (i)
			{
				if (i >= 0)
				{
				LABEL_43:
					v23 = 0;
					goto LABEL_44;
				}
				v23 = 1;
				v58 = 0;
			}
			else
			{
				v22 = *(_QWORD*)(v7 + 80);
				if (v20 <= v22)
					goto LABEL_43;
				v23 = 1;
				v24 = (__int64)((unsigned __int128)((__int64)(v20 - v22) * (__int128)0x6666666666666667i64) >> 64) >> 4;
				v58 = (v24 >> 63) + v24;
			}
		LABEL_44:
			++v10;
			if (!v23)
			{
				sub_1400590E0(a1, ((__int64)(a1[2] - a1[3]) >> 4) - v6);
				return 1i64;
			}
			if (v10 > 12 && v4)
			{
				v25 = *(_QWORD*)(v7 + 40);
				v26 = v10 + 10;
				v27 = v10 == -10;
				if (v10 + 10 > 0)
				{
					do
					{
						if (v25 <= *(_QWORD*)(v7 + 80))
							break;
						--v26;
						if (!*(_BYTE*)(**(_QWORD**)(v25 + 8) + 10i64))
							v26 -= *(_DWORD*)(v25 + 36);
						v25 -= 40i64;
					} while (v26 > 0);
					v27 = v26 == 0;
				}
				if (v27)
				{
					v28 = *(_QWORD*)(v7 + 80);
					if (v25 <= v28)
						goto LABEL_71;
					v29 = (__int64)((unsigned __int128)((__int64)(v25 - v28) * (__int128)0x6666666666666667i64) >> 64) >> 4;
					v58 = (v29 >> 63) + v29;
				}
				else
				{
					if (v26 >= 0)
					{
					LABEL_71:
						--v10;
						goto LABEL_72;
					}
					v58 = 0;
				}
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v30 = a1[2];
				v31 = sub_140062650((__int64)a1, (unsigned __int64*)asc_140C397F4, 5ui64);
				*(_DWORD*)(v30 + 8) = 4;
				*(_QWORD*)v30 = v31;
				a1[2] += 16i64;
				while (1)
				{
					while (1)
					{
						v32 = *(_QWORD*)(v7 + 40);
						v33 = v10 + 10;
						if (v10 > -10)
						{
							do
							{
								if (v32 <= *(_QWORD*)(v7 + 80))
									break;
								--v33;
								if (!*(_BYTE*)(**(_QWORD**)(v32 + 8) + 10i64))
									v33 -= *(_DWORD*)(v32 + 36);
								v32 -= 40i64;
							} while (v33 > 0);
						}
						if (v33)
							break;
						v34 = *(_QWORD*)(v7 + 80);
						if (v32 <= v34)
							goto LABEL_72;
						v35 = (__int64)((unsigned __int128)((__int64)(v32 - v34) * (__int128)0x6666666666666667i64) >> 64) >> 4;
						++v10;
						v58 = (v35 >> 63) + v35;
					}
					if (v33 >= 0)
						break;
					v58 = 0;
					++v10;
				}
			LABEL_72:
				v4 = 0;
			}
			else
			{
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v36 = a1[2];
				v37 = sub_140062650((__int64)a1, (unsigned __int64*)asc_140C2CD3C, 2ui64);
				*(_DWORD*)(v36 + 8) = 4;
				v38 = aSnl;
				*(_QWORD*)v36 = v37;
				a1[2] += 16i64;
				v39 = 0i64;
				v40 = 0i64;
				if (aSnl[0] == 62)
				{
					v41 = *(_QWORD*)(v7 + 16);
					v38 = &aSnl[1];
					v39 = *(_QWORD*)(v41 - 16);
					*(_QWORD*)(v7 + 16) = v41 - 16;
				}
				else if (v58)
				{
					v40 = *(_QWORD*)(v7 + 80) + 40i64 * v58;
					v39 = **(_QWORD**)(v40 + 8);
				}
				sub_140059D50(v7, v38, (__int64)v51, v39, v40);
				if (sub_1407DE0B4((__int64)v38, 0x66u))
				{
					v42 = *(_QWORD*)(v7 + 16);
					if (v39)
					{
						*(_QWORD*)v42 = v39;
						*(_DWORD*)(v42 + 8) = 6;
					}
					else
					{
						*(_DWORD*)(v42 + 8) = 0;
					}
					if ((__int64)(*(_QWORD*)(v7 + 56) - *(_QWORD*)(v7 + 16)) <= 16)
					{
						v43 = *(_DWORD*)(v7 + 88);
						if (v43 < 1)
							v44 = v43 + 1;
						else
							v44 = 2 * v43;
						sub_140061210(v7, v44);
					}
					*(_QWORD*)(v7 + 16) += 16i64;
				}
				if (sub_1407DE0B4((__int64)v38, 0x4Cu))
					sub_140059C20(v7, v39);
				sub_140058780((__int64)a1, (unsigned __int64*)"%s:", v57);
				if ((int)v55 > 0)
					sub_140058780((__int64)a1, (unsigned __int64*)"%d:", v55);
				if (*v53)
				{
					sub_140058780((__int64)a1, (unsigned __int64*)" in function '%s'", v52);
				}
				else
				{
					v45 = *v54;
					if (*v54 == 109)
					{
						sub_140058780((__int64)a1, (unsigned __int64*)aInMainChunk_0);
					}
					else if (v45 == 67 || v45 == 116)
					{
						if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
							sub_14005E2C0((__int64)a1);
						v46 = a1[2];
						v47 = sub_140062650((__int64)a1, (unsigned __int64*)asc_140C2CC94, 2ui64);
						*(_DWORD*)(v46 + 8) = 4;
						*(_QWORD*)v46 = v47;
						a1[2] += 16i64;
					}
					else
					{
						sub_140058780((__int64)a1, (unsigned __int64*)" in function <%s:%d>", v57, v56);
					}
				}
				sub_1400590E0(a1, ((__int64)(a1[2] - a1[3]) >> 4) - v6);
			}
		}
	}
	v15 = sub_1400580E0((__int64)a1, v6 + 1);
	if (v15 != dword_140A12138 && (unsigned int)(v15[2] - 3) <= 1)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v13 = 1i64;
		v14 = (unsigned __int64*)asc_140C2CC34;
		goto LABEL_30;
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 14078D010: using guessed type char var_B8[8];


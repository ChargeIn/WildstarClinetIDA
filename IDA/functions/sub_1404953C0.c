#include "../winhttp.h"

//----- (00000001404953C0) ----------------------------------------------------
int** __fastcall sub_1404953C0(__int64 a1, int** a2, __int64* a3, int* a4)
{
	__int64 v4; // rax
	__int64 v5; // r8
	int** result; // rax
	int* v10; // r8
	int* v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rsi
	int* v14; // rax
	int* v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rax
	int* v18; // rcx
	__int64 v19; // r9
	__int64 i; // rax
	__int64 v21; // rax
	int* v22; // [rsp+20h] [rbp-28h]
	char v23[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v5 = *a3;
	if (v5 == *(_QWORD*)(v4 + 16))
	{
		if (*(_QWORD*)(a1 + 16) && (unsigned int)*a4 < *(_DWORD*)(v5 + 32))
		{
			v22 = a4;
		LABEL_5:
			sub_140495DF0(a1, a2, v5, v5, v22);
			return a2;
		}
		v10 = a4;
		goto LABEL_7;
	}
	if (v5 == v4)
	{
		v12 = (unsigned int)*a4;
		v13 = *(_QWORD*)(v4 + 24);
		if (*(_DWORD*)(v13 + 32) >= (unsigned int)v12)
		{
			v18 = *(int**)sub_140495EE0(a1, (__int64)v23, a4);
			result = a2;
			*a2 = v18;
		}
		else
		{
			if (v13 == v4 || (unsigned int)v12 < *(_DWORD*)(v13 + 32))
			{
				v15 = sub_14018B280(264i64, 0);
				if (v15 != (int*)-32i64)
				{
					v15[8] = *a4;
					sub_140494D40((__int64)(v15 + 10), (__int64)(a4 + 2));
				}
				*(_QWORD*)(v13 + 16) = v15;
				v17 = *(_QWORD*)(a1 + 8);
				if (v13 == v17)
				{
					*(_QWORD*)(v17 + 8) = v15;
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v15;
				}
				else if (v13 == *(_QWORD*)(v17 + 16))
				{
					*(_QWORD*)(v17 + 16) = v15;
				}
			}
			else
			{
				v14 = sub_140495FE0(v12, a4);
				*(_QWORD*)(v13 + 24) = v14;
				v15 = v14;
				v16 = *(_QWORD*)(a1 + 8);
				if (v13 == *(_QWORD*)(v16 + 24))
					*(_QWORD*)(v16 + 24) = v15;
			}
			*((_QWORD*)v15 + 1) = v13;
			*((_QWORD*)v15 + 2) = 0i64;
			*((_QWORD*)v15 + 3) = 0i64;
			sub_1400081C0((__int64)v15, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
			++* (_QWORD*)(a1 + 16);
			*a2 = v15;
			return a2;
		}
	}
	else
	{
		if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
		{
			v19 = *(_QWORD*)(v5 + 16);
			if (v19)
			{
				for (i = *(_QWORD*)(v19 + 24); i; i = *(_QWORD*)(i + 24))
					v19 = i;
			}
			else
			{
				v19 = *(_QWORD*)(v5 + 8);
				if (v5 == *(_QWORD*)(v19 + 16))
				{
					do
					{
						v21 = v19;
						v19 = *(_QWORD*)(v19 + 8);
					} while (v21 == *(_QWORD*)(v19 + 16));
				}
			}
		}
		else
		{
			v19 = *(_QWORD*)(v5 + 24);
		}
		if (*(_DWORD*)(v19 + 32) >= (unsigned int)*a4 || (unsigned int)*a4 >= *(_DWORD*)(v5 + 32))
		{
			v10 = a4;
		LABEL_7:
			v11 = *(int**)sub_140495EE0(a1, (__int64)v23, v10);
			result = a2;
			*a2 = v11;
			return result;
		}
		v22 = a4;
		if (*(_QWORD*)(v19 + 24))
			goto LABEL_5;
		sub_140495DF0(a1, a2, 0i64, v19, a4);
		return a2;
	}
	return result;
}


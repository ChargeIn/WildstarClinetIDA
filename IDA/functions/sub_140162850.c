#include "../winhttp.h"

//----- (0000000140162850) ----------------------------------------------------
char __fastcall sub_140162850(__int64 a1, int* a2)
{
	char v2; // bl
	__int64 v5; // rax
	int v6; // ecx
	__int64 v7; // r9
	int v8; // ecx
	int v9; // r10d
	__int64 v10; // r8
	int v11; // edx
	__int64 v13; // rax
	__int64 v14; // rdi
	void(__fastcall * **v15)(_QWORD); // rcx
	void(__fastcall * **v16)(_QWORD); // rbx
	int v17; // [rsp+30h] [rbp+8h] BYREF
	int v18; // [rsp+40h] [rbp+18h] BYREF

	v2 = 0;
	if (*(int*)(a1 + 1068) < 0)
	{
		v17 = -1;
		if (!sub_140161CD0(a1, a2, &v17, &v18) || v17 >= 0 || a2[1] >= *(_DWORD*)(a1 + 1024))
			return sub_1400D1710(a1, a2);
		v5 = *(_QWORD*)(a1 + 464);
		v6 = v5 ? *(_DWORD*)(v5 + 1300) : 0;
		v7 = *(_QWORD*)(a1 + 1144);
		v8 = -v6;
		if (!v7)
			return sub_1400D1710(a1, a2);
		v9 = *a2;
		v10 = *(_QWORD*)(a1 + 1136);
		do
		{
			if (**(_BYTE**)v10)
				v11 = *(_DWORD*)(*(_QWORD*)v10 + 4i64);
			else
				v11 = 0;
			v8 += v11;
			if (v9 >= v8 && v9 < v8 + 10)
				v2 = 1;
			v10 += 8i64;
			--v7;
		} while (v7);
		if (!v2)
			return sub_1400D1710(a1, a2);
	}
	v13 = *(_QWORD*)(a1 + 48);
	v14 = *(_QWORD*)(a1 + 32);
	v15 = *(void(__fastcall****)(_QWORD))(v14 + 2848);
	v16 = *(void(__fastcall****)(_QWORD))(v13 + 968);
	if (v16 != v15)
	{
		if (v15)
		{
			(*v15)[1](v15);
			*(_QWORD*)(v14 + 2848) = 0i64;
		}
		*(_QWORD*)(v14 + 2848) = v16;
		if (v16)
			(**v16)(v16);
	}
	return 1;
}


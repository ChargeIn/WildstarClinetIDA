#include "../winhttp.h"

//----- (0000000140716180) ----------------------------------------------------
__int64 __fastcall sub_140716180(__int64 a1, __int64 a2, unsigned int a3)
{
	int v5; // ecx
	int v7; // edi
	__int64 v8; // r8
	_QWORD* v9; // rcx
	_QWORD* v10; // r9
	__int64 v11; // rdx
	__int64 v12; // r8
	void(__fastcall * **v13)(_QWORD, __int64); // rcx
	__int64 v14; // rcx
	_QWORD* v15; // rdx
	__int64 v16; // rdx
	__int64 result; // rax

	v5 = 0;
	v7 = 0;
	while (*(_QWORD*)(a1 + 24))
	{
		v8 = *(_QWORD*)(a1 + 24);
		if ((int)(a3 - *(_DWORD*)(v8 + 8)) < 0)
			break;
		v9 = *(_QWORD**)(a1 + 16);
		if (v9)
		{
			v10 = (_QWORD*)v9[3];
			if (v10)
			{
				v11 = v9[2];
				if (v11 != *(_QWORD*)(v8 + 16))
				{
					*v10 = v9[4];
					v12 = v9[4];
					if (v12)
						*(_QWORD*)(v12 + 24) = v9[3];
					v9[3] = 0i64;
					v9[4] = 0i64;
					if (*(int*)(v11 + 4) < 2)
					{
						*(_DWORD*)(v11 + 4) = 3;
						if (*(_QWORD*)(v11 + 120) || *(_QWORD*)(v11 + 128))
							sub_140195960(v11 + 8, 0, v11 + 112, 4);
					}
				}
			}
			v13 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 16);
			if (v13)
				(**v13)(v13, 1i64);
		}
		v14 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 16) = v14;
		v15 = *(_QWORD**)(v14 + 40);
		if (v15)
			*v15 = *(_QWORD*)(v14 + 48);
		v16 = *(_QWORD*)(v14 + 48);
		if (v16)
			*(_QWORD*)(v16 + 40) = *(_QWORD*)(v14 + 40);
		*(_QWORD*)(v14 + 40) = 0i64;
		*(_QWORD*)(v14 + 48) = 0i64;
		result = *(_QWORD*)(a1 + 16);
		v5 = 0;
		v7 = 1;
		if (!*(_DWORD*)(result + 12))
		{
			result = sub_1407162F0(a1, a2, a3, 1);
			v5 = 1;
		}
	}
	if (*(_QWORD*)(a1 + 16))
	{
		if (!v5)
			return sub_1407162F0(a1, a2, a3, v7);
	}
	return result;
}


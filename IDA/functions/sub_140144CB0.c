#include "../winhttp.h"

//----- (0000000140144CB0) ----------------------------------------------------
int** __fastcall sub_140144CB0(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64* a5)
{
	int* v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax

	if (a4 == *(_QWORD*)(a1 + 8) || a3 || (int)sub_14018E2C0(*a5, *(unsigned __int16**)(a4 + 32)) < 0)
	{
		v8 = sub_14018B280(48i64, 0);
		if (v8 != (int*)-32i64)
		{
			*((_QWORD*)v8 + 4) = *a5;
			*((_QWORD*)v8 + 5) = a5[1];
		}
		*(_QWORD*)(a4 + 16) = v8;
		v10 = *(_QWORD*)(a1 + 8);
		if (a4 == v10)
		{
			*(_QWORD*)(v10 + 8) = v8;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v8;
		}
		else if (a4 == *(_QWORD*)(v10 + 16))
		{
			*(_QWORD*)(v10 + 16) = v8;
		}
	}
	else
	{
		v8 = sub_14018B280(48i64, 0);
		if (v8 != (int*)-32i64)
		{
			*((_QWORD*)v8 + 4) = *a5;
			*((_QWORD*)v8 + 5) = a5[1];
		}
		*(_QWORD*)(a4 + 24) = v8;
		v9 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v9 + 24))
			*(_QWORD*)(v9 + 24) = v8;
	}
	*((_QWORD*)v8 + 1) = a4;
	*((_QWORD*)v8 + 2) = 0i64;
	*((_QWORD*)v8 + 3) = 0i64;
	sub_1400081C0((__int64)v8, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v8;
	return a2;
}


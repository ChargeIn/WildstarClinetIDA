#include "../winhttp.h"

//----- (00000001403131D0) ----------------------------------------------------
__int64 __fastcall sub_1403131D0(__int64 a1)
{
	__int64 v1; // rsi
	int v2; // edi
	__int64 v3; // rbx
	_QWORD* v4; // rcx
	_QWORD* v5; // rdx
	__int64 v6; // rdx

	v1 = a1 - 8;
	v2 = *(_DWORD*)(a1 - 8) - 1;
	if (v2 >= 0)
	{
		v3 = a1 + 16i64 * *(int*)(a1 - 8) + 8;
		do
		{
			v4 = *(_QWORD**)(v3 - 16);
			v3 -= 16i64;
			if (v4)
			{
				v5 = (_QWORD*)v4[1];
				*v4 = &off_140B66870;
				if (v5)
					*v5 = v4[2];
				v6 = v4[2];
				if (v6)
					*(_QWORD*)(v6 + 8) = v4[1];
				v4[1] = 0i64;
				v4[2] = 0i64;
				v4[1] = 0i64;
				v4[2] = 0i64;
				sub_14018B900((__int64)v4, 0);
			}
			--v2;
		} while (v2 >= 0);
	}
	sub_14018B900(v1, 0);
	return v1;
}
// 140B66870: using guessed type void (__fastcall __noreturn *off_140B66870)();


#include "../winhttp.h"

//----- (0000000140716A40) ----------------------------------------------------
__int64 __fastcall sub_140716A40(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rsi
	__int64 v3; // rbx
	int v4; // edi
	__int64 v5; // rbx

	v1 = *(int*)(a1 - 8);
	v2 = a1 - 8;
	v3 = 48 * v1 + 16;
	v4 = v1 - 1;
	if (v4 >= 0)
	{
		v5 = a1 + v3;
		do
		{
			v5 -= 48i64;
			sub_140008410(v5);
			*(_QWORD*)(v5 - 16) = 0i64;
			*(_QWORD*)(v5 - 8) = 0i64;
			sub_140008410(v5);
			sub_14018B900(*(_QWORD*)(v5 + 8), 0);
			--v4;
		} while (v4 >= 0);
	}
	sub_14018B900(v2, 0);
	return v2;
}


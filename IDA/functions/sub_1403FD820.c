#include "../winhttp.h"

//----- (00000001403FD820) ----------------------------------------------------
void __fastcall sub_1403FD820(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rdi
	_QWORD* v4; // rsi

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_1403FD820(a1, v2[3]);
			v4 = (_QWORD*)v2[2];
			if (v2[8])
			{
				sub_1403FDC00((__int64)(v2 + 6), *(_QWORD**)(v2[7] + 8i64));
				*(_QWORD*)(v2[7] + 16i64) = v2[7];
				*(_QWORD*)(v2[7] + 8i64) = 0i64;
				*(_QWORD*)(v2[7] + 24i64) = v2[7];
				v2[8] = 0i64;
			}
			sub_14018B900(v2[7], 0);
			sub_14018B900((__int64)v2, 0);
			v2 = v4;
		} while (v4);
	}
}


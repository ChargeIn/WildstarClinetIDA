#include "../winhttp.h"

//----- (00000001400294C0) ----------------------------------------------------
void __fastcall sub_1400294C0(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rbx
	__int64 v4; // rcx
	_QWORD* v5; // rdi

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_1400294C0(a1, v2[3]);
			v4 = v2[7];
			v5 = (_QWORD*)v2[2];
			if (v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
			sub_14018B900((__int64)v2, 0);
			v2 = v5;
		} while (v5);
	}
}


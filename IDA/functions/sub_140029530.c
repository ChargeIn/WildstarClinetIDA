#include "../winhttp.h"

//----- (0000000140029530) ----------------------------------------------------
void __fastcall sub_140029530(_QWORD* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rdi
	__int64 v4; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = *(_QWORD*)(v3 + *a1 + 784);
			if (v4)
				sub_14018B900(v4, 0);
			++v1;
			v3 += 816i64;
		} while (v1 < a1[1]);
	}
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16i64) + 8i64))(*a1 - 16i64);
}


#include "../winhttp.h"

//----- (0000000140141C00) ----------------------------------------------------
int* __fastcall sub_140141C00(__int64 a1)
{
	unsigned __int64 v2; // rdi
	int* result; // rax
	int* v4; // rbx
	unsigned __int64 v5; // rbp
	__int64 v6; // r15

	v2 = *(_QWORD*)(a1 + 8) - 1i64;
	result = sub_1407DB590(*(int**)a1, (int*)(*(_QWORD*)a1 + 8i64), 8 * v2);
	v4 = *(int**)a1;
	if (v2)
	{
		if (v4)
		{
			if (v2 <= *((_QWORD*)v4 - 1))
				goto LABEL_10;
			v5 = (unsigned __int64)(sub_14018A3E0(8 * v2 + 16) - 16) >> 3;
			v6 = 8 * v5 + 16;
			result = (int*)(**((__int64(__fastcall***)(__int64, __int64))v4 - 2))((__int64)(v4 - 4), v6);
			if ((_DWORD)result)
			{
				*((_QWORD*)v4 - 1) = v5;
				goto LABEL_10;
			}
		}
		else
		{
			v5 = v2;
			v6 = 8 * v2 + 16;
		}
		result = sub_14018B280(v6, 0);
		if (result)
		{
			*((_QWORD*)result + 1) = v5;
			*(_QWORD*)result = off_140B55060;
		}
		v4 = result + 4;
	}
LABEL_10:
	if (*(int**)a1 != v4)
	{
		result = sub_1407DB590(v4, *(int**)a1, 8 * v2);
		if (*(_QWORD*)a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
		*(_QWORD*)a1 = v4;
	}
	*(_QWORD*)(a1 + 8) = v2;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();


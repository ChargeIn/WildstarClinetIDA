#include "../winhttp.h"

//----- (00000001408458B0) ----------------------------------------------------
__int64 __fastcall sub_1408458B0(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 result; // rax

	v2 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 4;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_1408297A0((__int64*)a1, 4) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 16;
	return result;
}


#include "../winhttp.h"

//----- (00000001402F63F0) ----------------------------------------------------
__int64 __fastcall sub_1402F63F0(__int64 a1, unsigned int a2)
{
	__int64 v3; // rbx
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 1688) != a2)
	{
		v3 = *(_QWORD*)(a1 + 1232);
		for (*(_DWORD*)(a1 + 1688) = a2; v3; v3 = *(_QWORD*)(v3 + 1248))
			result = sub_1402F63F0(v3, a2);
	}
	return result;
}


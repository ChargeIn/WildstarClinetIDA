#include "../winhttp.h"

//----- (0000000140130340) ----------------------------------------------------
char __fastcall sub_140130340(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	__int64* i; // rdi

	v3 = 0i64;
	for (i = (__int64*)(a1 + 1024); !*i || sub_140100DA0(*i, a2); i += 6)
	{
		if (++v3 >= 6)
			return 1;
	}
	return 0;
}


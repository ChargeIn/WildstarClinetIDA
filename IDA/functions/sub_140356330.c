#include "../winhttp.h"

//----- (0000000140356330) ----------------------------------------------------
__int64 __fastcall sub_140356330(__int64 a1)
{
	__int64* v2; // rcx
	__int64* v3; // rbx
	_QWORD* v4; // rax
	__int64 v5; // rdx
	__int64 v6; // rax

	v2 = *(__int64**)(a1 + 5272);
	if (v2)
	{
		do
		{
			v3 = (__int64*)v2[133];
			if (*(_DWORD*)(a1 + 880) - *((_DWORD*)v2 + 63) >= 0)
			{
				v4 = (_QWORD*)v2[132];
				if (v4)
					*v4 = v3;
				v5 = v2[133];
				if (v5)
					*(_QWORD*)(v5 + 1056) = v2[132];
				v6 = *v2;
				v2[132] = 0i64;
				v2[133] = 0i64;
				(*(void (**)(void))(v6 + 8))();
			}
			v2 = v3;
		} while (v3);
	}
	return 0i64;
}


#include "../winhttp.h"

//----- (0000000140890D60) ----------------------------------------------------
__int64 __fastcall sub_140890D60(__int64 a1)
{
	__int64 v1; // rax

	if ((*(_BYTE*)(a1 + 208) & 1) == 0)
	{
		while (1)
		{
			v1 = *(_QWORD*)(a1 + 64);
			if (!v1)
				break;
			a1 = *(_QWORD*)(a1 + 64);
			if ((*(_BYTE*)(v1 + 208) & 1) != 0)
				return v1 + 192;
		}
	}
	return a1 + 192;
}


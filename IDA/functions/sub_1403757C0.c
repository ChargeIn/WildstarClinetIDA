#include "../winhttp.h"

//----- (00000001403757C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1403757C0(__int64 a1, __int64 a2)
{
	return *(_QWORD*)a1 == *(_QWORD*)a2 && *(_DWORD*)(a1 + 8) == *(_DWORD*)(a2 + 8);
}


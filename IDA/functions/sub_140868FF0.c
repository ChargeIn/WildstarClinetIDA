#include "../winhttp.h"

//----- (0000000140868FF0) ----------------------------------------------------
__int64 __fastcall sub_140868FF0(__int64 a1)
{
	LPCRITICAL_SECTION v1; // rbx
	unsigned int v3; // edi

	v1 = qword_140C61BA8;
	EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 3184));
	v3 = *(_DWORD*)(a1 + 8) + 1;
	*(_DWORD*)(a1 + 8) = v3;
	LeaveCriticalSection((LPCRITICAL_SECTION)((char*)v1 + 3184));
	return v3;
}


#include "../winhttp.h"

//----- (000000014037A3C0) ----------------------------------------------------
_BOOL8 __fastcall sub_14037A3C0(__m128* a1, __m128* a2)
{
	return (_mm_movemask_ps(_mm_cmpneq_ps(*a1, *a2)) & 7) == 0 && a1[1].m128_u64[0] == a2[1].m128_u64[0];
}


#include "../winhttp.h"

//----- (0000000140060E30) ----------------------------------------------------
__int64 __fastcall sub_140060E30(__int64 a1, __int64 a2)
{
	sub_140064780(a1, *(_QWORD*)(a2 + 24), 4i64 * *(int*)(a2 + 80), 0i64);
	sub_140064780(a1, *(_QWORD*)(a2 + 32), 8i64 * *(int*)(a2 + 88), 0i64);
	sub_140064780(a1, *(_QWORD*)(a2 + 16), 16i64 * *(int*)(a2 + 76), 0i64);
	sub_140064780(a1, *(_QWORD*)(a2 + 40), 4i64 * *(int*)(a2 + 84), 0i64);
	sub_140064780(a1, *(_QWORD*)(a2 + 48), 16i64 * *(int*)(a2 + 92), 0i64);
	sub_140064780(a1, *(_QWORD*)(a2 + 56), 8i64 * *(int*)(a2 + 72), 0i64);
	return sub_140064780(a1, a2, 120i64, 0i64);
}


#include "../winhttp.h"

//----- (000000014093C5A0) ----------------------------------------------------
__int64 sub_14093C5A0()
{
	_QWORD* v0; // rax
	__int64 v1; // rcx

	v0 = qword_140C7A100;
	v1 = 4i64;
	do
	{
		*v0 = 0i64;
		v0[1] = 0i64;
		v0[2] = 0i64;
		v0 += 8;
		*(v0 - 5) = 0i64;
		*(v0 - 4) = 0i64;
		*(v0 - 3) = 0i64;
		*(v0 - 2) = 0i64;
		*(v0 - 1) = 0i64;
		--v1;
	} while (v1);
	return sub_1407DD89C(sub_14094EBA0);
}
// 140C7A100: using guessed type _QWORD qword_140C7A100[32];


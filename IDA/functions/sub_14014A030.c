#include "../winhttp.h"

//----- (000000014014A030) ----------------------------------------------------
__int64 __fastcall sub_14014A030(_QWORD* a1)
{
	float* v2; // rax

	v2 = (float*)sub_140056AB0(a1, 1u);
	sub_140058780((__int64)a1, (unsigned __int64*)"AaRect(%f, %f, %f, %f)", *v2, v2[1], v2[4], v2[5]);
	return 1i64;
}


#include "../winhttp.h"

//----- (000000014084B280) ----------------------------------------------------
void sub_14084B280()
{
	unsigned int v0; // esi
	float* v1; // r14
	float* v2; // rax
	int v3; // [rsp+28h] [rbp-20h]
	float v4[6]; // [rsp+30h] [rbp-18h] BYREF

	v0 = 0;
	v1 = (float*)&unk_140C6206C;
	do
	{
		*(v1 - 27) = *(v1 - 27);
		*(v1 - 26) = *(v1 - 26);
		*(v1 - 25) = *(v1 - 25);
		*(v1 - 24) = *(v1 - 24);
		*(v1 - 23) = *(v1 - 23);
		*(v1 - 22) = *(v1 - 22);
		*(v1 - 21) = *(v1 - 21);
		*(v1 - 20) = *(v1 - 20);
		*(v1 - 19) = *(v1 - 19);
		v2 = sub_1408294F0(v4, v1 - 24, v1 - 27);
		v3 = *((_DWORD*)v2 + 2);
		*(_QWORD*)(v1 - 7) = *(_QWORD*)v2;
		*((_DWORD*)v1 - 5) = v3;
		*(v1 - 4) = *(v1 - 24);
		*(v1 - 3) = *(v1 - 23);
		*(v1 - 2) = *(v1 - 22);
		*(v1 - 1) = *(v1 - 27);
		*v1 = *(v1 - 26);
		v1[1] = *(v1 - 25);
		*((_BYTE*)v1 + 9) = 1;
		++v0;
		v1 += 32;
	} while (v0 < 8);
	sub_140864B50();
}
// 14084B280: using guessed type float var_18[6];


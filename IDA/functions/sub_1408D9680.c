#include "../winhttp.h"

//----- (00000001408D9680) ----------------------------------------------------
void __fastcall sub_1408D9680(int a1, double a2, double a3, double a4, double* a5)
{
	double v5; // xmm7_8
	double v6; // xmm11_8
	double v7; // xmm8_8
	double v8; // xmm12_8
	double v9; // xmm0_8
	double v10; // xmm9_8
	double v11; // xmm2_8
	double v12; // xmm4_8
	double v13; // xmm5_8
	double v14; // xmm1_8
	double v15; // xmm8_8
	double v16; // xmm9_8
	double v17; // xmm6_8

	*a5 = 1.0;
	a5[3] = 1.0;
	a5[4] = 1.0;
	a5[1] = 0.0;
	a5[2] = 0.0;
	a5[5] = 0.0;
	v5 = a2 / (double)a1;
	if (v5 >= 0.0002083333333333333)
	{
		if (v5 > 0.4583333333333333)
			v5 = 0.4583333333333333;
	}
	else
	{
		v5 = 0.0002083333333333333;
	}
	sub_1409005C8(v5 * 3.141592653589793);
	v6 = v5 * 3.141592653589793;
	v7 = (v5 * 3.141592653589793 + 1.0) * (1.0 / a3);
	v8 = v6 * v6;
	v9 = sub_1408FFA00(10.0, a4 * 0.05);
	if (v9 < 1.0)
	{
		v10 = (v5 * 3.141592653589793 + 1.0) * (1.0 / a3);
		v12 = 1.0;
		v14 = fabs(*(double*)&qword_140C13350 * a4);
		v7 = 1.0 / v9 * v7;
		v13 = (v5 * v7 + 1.0 - v5) * v14 + 1.0 - v14;
		if (v13 < 1.0)
			v13 = 1.0;
		if (v13 > 1.0 / v9)
			v13 = 1.0 / v9;
	}
	else
	{
		v10 = v9 * v7;
		v11 = fabs(*(double*)&qword_140C13350 * a4);
		v12 = (v5 * (v9 * v7) + 1.0 - v5) * v11 + 1.0 - v11;
		if (v12 < 1.0)
			v12 = 1.0;
		if (v12 > v9)
			v12 = v9;
		v13 = 1.0;
	}
	v15 = v7 * v6;
	v16 = v10 * v6;
	a5[3] = 1.0;
	v17 = 1.0 / (v15 + v13 + v8);
	*a5 = (v16 + v12 + v8) * v17;
	a5[2] = (v12 - v16 + v8) * v17;
	a5[1] = (v8 * 2.0 - v12 * 2.0) * v17;
	a5[4] = (v8 * 2.0 - v13 * 2.0) * v17;
	a5[5] = (v13 - v15 + v8) * v17;
}
// 140B7B510: using guessed type __int128 xmmword_140B7B510;
// 140C13350: using guessed type __int64 qword_140C13350;


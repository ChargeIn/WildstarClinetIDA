#include "../winhttp.h"

//----- (00000001408FD8A4) ----------------------------------------------------
float __fastcall sub_1408FD8A4(float result)
{
	double v1; // xmm3_8
	double v2; // rbx
	unsigned __int64 v3; // rcx
	double v4; // xmm0_8
	unsigned __int64 v5; // xmm5_8
	__int64 v6; // rbx
	int v7; // edx
	double v8; // xmm4_8
	double v9; // xmm2_8
	double v10; // xmm3_8
	unsigned __int64 v11; // r8
	double v12; // xmm1_8
	double v13; // xmm1_8
	double v14; // xmm3_8
	char v15; // dl
	double v16; // xmm4_8
	double v17; // xmm0_8
	int v18; // [rsp+78h] [rbp+10h] BYREF
	double v19; // [rsp+80h] [rbp+18h]
	double v20; // [rsp+88h] [rbp+20h] BYREF

	v1 = result;
	v19 = result;
	v2 = result;
	v3 = fabs(result);
	if (v3 <= 0x3FE921FB54442D18i64)
	{
		if (v3 >= 0x3F80000000000000i64)
			return (0.3852960712639954 - result * result * 0.01720324804714817)
			* (result
				* (result
					* result))
			/ ((result * result * 0.01844239256901656 - 0.5139650547885454) * (result * result) + 1.155888214346884)
			+ result;
		if (v3 < 0x3F20000000000000i64)
		{
			if (v3)
				sub_1407F662C(32);
			return result;
		}
		return v1 * v1 * v1 * 0.3333333333333333 + v1;
	}
	if ((*(_QWORD*)&v2 & 0x7FF0000000000000i64) != 0x7FF0000000000000i64)
	{
		v5 = 0x8000000000000000ui64;
		v6 = *(_QWORD*)&v2 >> 63;
		if ((_DWORD)v6)
			v1 = -v1;
		if (v1 >= 500000.0)
		{
			sub_1408FD634(v3, &v20, &v18);
			v15 = v18;
			v14 = v20;
		}
		else
		{
			if (v3 > 0x400F6A7A2955385Ei64)
			{
				if (v3 > 0x401C463ABECCB2BBi64)
					v7 = (int)(v1 * 0.6366197723675814 + 0.5);
				else
					v7 = (v3 > 0x4015FDBBE9BBA775i64) + 3;
			}
			else
			{
				v7 = (v3 > 0x4002D97C7F3321D2i64) + 1;
			}
			v8 = (double)v7;
			v9 = (double)v7 * 6.077100506506192e-11;
			v10 = v1 - (double)v7 * 1.570796326734126;
			v19 = v10;
			v11 = (v3 >> 52) - ((*(_QWORD*)&v10 >> 52) & 0x7FFi64);
			if (v11 > 0xF)
			{
				v12 = v10;
				v10 = v10 - v8 * 6.077100506303966e-11;
				v9 = v8 * 2.022266248795951e-21 - (v12 - v10 - v8 * 6.077100506303966e-11);
				if (v11 > 0x30)
				{
					v13 = v10;
					v10 = v10 - v8 * 2.022266248711166e-21;
					v9 = v8 * 8.4784276603689e-32 - (v13 - v10 - v8 * 2.022266248711166e-21);
				}
			}
			v14 = v10 - v9;
			v15 = v7 & 3;
		}
		v16 = (0.3852960712639954 - v14 * v14 * 0.01720324804714817)
			* (v14
				* v14
				* v14)
			/ ((v14 * v14 * 0.01844239256901656 - 0.5139650547885454) * (v14 * v14) + 1.155888214346884)
			+ v14;
		if ((_DWORD)v6)
		{
			if ((v15 & 1) != 0)
				v17 = -1.0 / v16;
			else
				v17 = (0.3852960712639954 - v14 * v14 * 0.01720324804714817)
				* (v14
					* v14
					* v14)
				/ ((v14 * v14 * 0.01844239256901656 - 0.5139650547885454) * (v14 * v14) + 1.155888214346884)
				+ v14;
			*(_QWORD*)&v4 = *(_QWORD*)&v17 ^ v5;
		}
		else if ((v15 & 1) != 0)
		{
			return -1.0 / v16;
		}
		else
		{
			return (0.3852960712639954 - v14 * v14 * 0.01720324804714817)
				* (v14
					* v14
					* v14)
				/ ((v14 * v14 * 0.01844239256901656 - 0.5139650547885454) * (v14 * v14) + 1.155888214346884)
				+ v14;
		}
		return v4;
	}
	if ((*(_QWORD*)&v2 & 0xFFFFFFFFFFFFFi64) != 0)
		return sub_1407EFD48((__int64)"tanf", 32, LODWORD(result) | 0x400000, 1, 0, 0x21u, SLODWORD(result), 0.0, 1);
	else
		return sub_1407EFD48((__int64)"tanf", 32, -4194304, 1, 8, 0x21u, SLODWORD(result), 0.0, 1);
}
// 1408FDBE0: variable 'v5' is possibly undefined


#include "../winhttp.h"

//----- (00000001400AA550) ----------------------------------------------------
__int64 __fastcall sub_1400AA550(__int64 a1, unsigned __int16* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	__int64 v12; // rcx
	unsigned __int64 v13; // r9
	_QWORD* v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // r8
	unsigned __int64 v17; // rdx
	__int64 v18; // rcx
	unsigned __int64 v19; // r9
	_QWORD* v20; // rdx
	__int64 v21; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(unsigned int*)a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = (unsigned int)v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (v7 & 0x3FFF) << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 21) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 14i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 2) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 0xEui64);
		if ((int)result < 0)
			return result;
	}
	v11 = *(_QWORD*)(a1 + 8);
	if (v11
		&& (v12 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 32)) - v12) >= 0x40))
	{
		v13 = *((int*)a2 + 1);
		v14 = *(_QWORD**)(v11 + 32);
		*v14 &= (1i64 << v12) - 1;
		*v14 |= (v13 & 0xF) << *(_QWORD*)(a1 + 16);
		v15 = *(_QWORD*)(a1 + 16);
		if (((v15 + 11) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = v13 >> (64 - (unsigned __int8)v15);
		*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 4i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 4) & 7;
	}
	else
	{
		result = sub_140336470(a1, *((int*)a2 + 1), 4ui64);
		if ((int)result < 0)
			return result;
	}
	v16 = *(_QWORD*)(a1 + 8);
	v17 = *((unsigned int*)a2 + 2);
	if (v16
		&& (v18 = *(_QWORD*)(a1 + 16),
			(unsigned __int64)(8i64 * (*(_QWORD*)(v16 + 24) - *(_QWORD*)(v16 + 32)) - v18) >= 0x40))
	{
		v19 = (unsigned int)v17;
		v20 = *(_QWORD**)(v16 + 32);
		*v20 &= (1i64 << v18) - 1;
		*v20 |= (unsigned __int64)(unsigned int)v19 << *(_QWORD*)(a1 + 16);
		v21 = *(_QWORD*)(a1 + 16);
		if (((v21 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v16 + 32) + 8i64) = v19 >> (64 - (unsigned __int8)v21);
		*(_QWORD*)(v16 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, v17, 0x20ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_1400A7110(a1, *((_DWORD*)a2 + 3), 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_1400A7110(a1, *((_DWORD*)a2 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_1400A7110(a1, *((_DWORD*)a2 + 5), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_1400A7110(a1, *((_DWORD*)a2 + 6), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_1400A7110(a1, *((_DWORD*)a2 + 7), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_1400A7110(a1, *((_DWORD*)a2 + 8), 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_1400A7110(a1, *((_DWORD*)a2 + 9), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_1400A7110(a1, *((_DWORD*)a2 + 10), 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_1400A7250(a1, *((_DWORD*)a2 + 11) != 0, 1ui64);
									if ((int)result >= 0)
									{
										result = sub_1400A7250(a1, *((_DWORD*)a2 + 12) != 0, 1ui64);
										if ((int)result >= 0)
										{
											result = sub_1400A7250(a1, *((_DWORD*)a2 + 13) != 0, 1ui64);
											if ((int)result >= 0)
											{
												result = sub_1400A7250(a1, *((_DWORD*)a2 + 14) != 0, 1ui64);
												if ((int)result >= 0)
												{
													result = sub_1400A7110(a1, *((_DWORD*)a2 + 15), 0x20ui64);
													if ((int)result >= 0)
													{
														result = sub_1400A7110(a1, *((_DWORD*)a2 + 16), 0x20ui64);
														if ((int)result >= 0)
														{
															result = sub_1400A7110(a1, *((_DWORD*)a2 + 17), 0x20ui64);
															if ((int)result >= 0)
															{
																result = sub_1400A7110(a1, *((_DWORD*)a2 + 18), 0x20ui64);
																if ((int)result >= 0)
																{
																	result = sub_1400A7110(a1, *((_DWORD*)a2 + 19), 0x20ui64);
																	if ((int)result >= 0)
																	{
																		result = sub_1400A7110(a1, *((_DWORD*)a2 + 20), 0x20ui64);
																		if ((int)result >= 0)
																			return sub_1403360D0(a1, a2 + 42, (__int64)(a2 + 48));
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}


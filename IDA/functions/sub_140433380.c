#include "../winhttp.h"

//----- (0000000140433380) ----------------------------------------------------
__int64 __fastcall sub_140433380(_QWORD* a1, __int64 a2)
{
	_QWORD* v5; // rsi
	int* v6; // r8
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	int v11; // [rsp+28h] [rbp-10h]

	if (a2)
	{
		v5 = (_QWORD*)sub_140059170(a1, 0x10ui64);
		v6 = sub_14018B280(24i64, 0);
		if (v6)
		{
			*(_QWORD*)v6 = off_140B66E68;
			v6[2] = **(_DWORD**)(a2 + 8);
			*((_QWORD*)v6 + 2) = *(_QWORD*)(a2 + 16);
		}
		else
		{
			v6 = 0i64;
		}
		v5[1] = v6;
		*v5 = 14672i64;
		v7 = a1[4];
		v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.ChatChannel", 0x10ui64);
		v9 = a1[2];
		v10 = v8;
		v11 = 4;
		sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v10, v9);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140B66E68: using guessed type __int64 (__fastcall *off_140B66E68[2])();


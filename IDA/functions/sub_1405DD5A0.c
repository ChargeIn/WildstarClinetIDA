#include "../winhttp.h"

//----- (00000001405DD5A0) ----------------------------------------------------
__int64 __fastcall sub_1405DD5A0(__int64 a1)
{
	_QWORD* v2; // rcx
	int* v3; // rax
	int* v4; // rax
	__int64 result; // rax

	v2 = (_QWORD*)(a1 + 80);
	*(v2 - 7) = 0i64;
	*(v2 - 6) = 0i64;
	*(v2 - 4) = 0i64;
	*(v2 - 3) = 0i64;
	*((_DWORD*)v2 - 18) = 1414420037;
	*((_DWORD*)v2 - 1) = 94;
	sub_1405E4000(v2);
	sub_1405E4080((_QWORD*)(a1 + 120));
	sub_1405E4100((_QWORD*)(a1 + 160));
	sub_1400522F0((_QWORD*)(a1 + 200));
	sub_140019600((_QWORD*)(a1 + 240));
	sub_1405E4180((_QWORD*)(a1 + 280));
	sub_1405E4200((_QWORD*)(a1 + 320));
	sub_1400522F0((_QWORD*)(a1 + 360));
	sub_1400522F0((_QWORD*)(a1 + 400));
	sub_140019600((_QWORD*)(a1 + 440));
	sub_1405E4280((_QWORD*)(a1 + 480));
	sub_1400522F0((_QWORD*)(a1 + 520));
	sub_140019600((_QWORD*)(a1 + 560));
	*(_QWORD*)(a1 + 600) = 0i64;
	*(_QWORD*)(a1 + 608) = 0i64;
	*(_QWORD*)(a1 + 616) = 0i64;
	*(_QWORD*)(a1 + 624) = 0i64;
	*(_QWORD*)(a1 + 632) = 0i64;
	*(_QWORD*)(a1 + 640) = 0i64;
	*(_DWORD*)(a1 + 648) = 0;
	*(_DWORD*)(a1 + 656) = 4;
	*(_QWORD*)(a1 + 664) = 0i64;
	*(_QWORD*)(a1 + 672) = 0i64;
	*(_DWORD*)(a1 + 680) = 0;
	*(_QWORD*)(a1 + 696) = 0i64;
	*(_QWORD*)(a1 + 704) = 0i64;
	*(_QWORD*)(a1 + 712) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 696) = v3;
	*(_QWORD*)(a1 + 704) = v3;
	*(_QWORD*)(a1 + 712) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	*(_QWORD*)(a1 + 728) = 0i64;
	*(_QWORD*)(a1 + 736) = 0i64;
	*(_QWORD*)(a1 + 744) = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 728) = v4;
	*(_QWORD*)(a1 + 736) = v4;
	*(_QWORD*)(a1 + 744) = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	*(_DWORD*)(a1 + 752) = 4;
	*(_QWORD*)(a1 + 776) = 0i64;
	*(_QWORD*)(a1 + 784) = 0i64;
	*(_QWORD*)(a1 + 800) = 0i64;
	*(_QWORD*)(a1 + 808) = 0i64;
	*(_DWORD*)(a1 + 760) = 1414420037;
	*(_DWORD*)(a1 + 828) = 94;
	*(_DWORD*)(a1 + 832) = 1;
	*(_DWORD*)(a1 + 836) = 1;
	*(_QWORD*)(a1 + 856) = 0i64;
	*(_QWORD*)(a1 + 864) = 0i64;
	*(_QWORD*)(a1 + 880) = 0i64;
	*(_QWORD*)(a1 + 888) = 0i64;
	result = a1;
	*(_DWORD*)(a1 + 840) = 1414420037;
	*(_DWORD*)(a1 + 908) = 94;
	return result;
}


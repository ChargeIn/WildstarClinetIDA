#include "../winhttp.h"

//----- (0000000140771AD0) ----------------------------------------------------
void __fastcall sub_140771AD0(__int64* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rcx

	sub_140774790((__int64)a1);
	sub_140772560((__int64)a1, v2);
	sub_140774990((__int64)a1);
	sub_140008410((__int64)(a1 + 102));
	sub_14018B900(a1[103], 0);
	v3 = a1[100];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	sub_140538480(a1 + 54);
	sub_140538480(a1 + 8);
	sub_140538520((__int64)(a1 + 6));
	sub_14018B900(a1[7], 0);
}
// 140771AE5: variable 'v2' is possibly undefined


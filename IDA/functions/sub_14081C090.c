#include "../winhttp.h"

//----- (000000014081C090) ----------------------------------------------------
__int64 __fastcall sub_14081C090(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
	__int64(__fastcall * v5)(__int64, _QWORD, _QWORD, __int64, _QWORD); // [rsp+20h] [rbp-28h]
	HMODULE v6; // [rsp+28h] [rbp-20h] BYREF
	__int64 v7; // [rsp+30h] [rbp-18h] BYREF
	unsigned int v8; // [rsp+38h] [rbp-10h]
	int v9; // [rsp+3Ch] [rbp-Ch]

	v6 = 0i64;
	v9 = 0;
	v8 = sub_14080B500(&v6);
	if (v8 && v8 != -14)
		return v8;
	if (v8 == -14)
		qword_140C613E8 = 0i64;
	if (qword_140C613E8 && dword_140C613F0 != dword_140C60980[v9])
		qword_140C613E8 = 0i64;
	if (!qword_140C613E8 && v6 && nvapi_QueryInterface)
	{
		qword_140C613E8 = nvapi_QueryInterface(2079369549i64);
		dword_140C613F0 = dword_140C60980[v9];
	}
	if (qword_140C613E8)
	{
		v5 = (__int64(__fastcall*)(__int64, _QWORD, _QWORD, __int64, _QWORD))qword_140C613E8;
		v7 = 0i64;
		if (qword_140C60938)
			qword_140C60938(2079369549i64, &v7);
		v8 = v5(a1, a2, a3, a4, v5);
		if (qword_140C60940)
			qword_140C60940(2079369549i64, v7, v8);
		--dword_140C60970[v9];
		return v8;
	}
	else
	{
		--dword_140C60970[v9];
		return 4294967293i64;
	}
}
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type double (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60970: using guessed type int dword_140C60970[];
// 140C60980: using guessed type _DWORD dword_140C60980[4];
// 140C613E8: using guessed type __int64 qword_140C613E8;
// 140C613F0: using guessed type int dword_140C613F0;


#include "../winhttp.h"

//----- (00000001401D4CC0) ----------------------------------------------------
signed int __fastcall sub_1401D4CC0(__int64 a1, LARGE_INTEGER a2, char* a3, unsigned __int64 a4)
{
	LARGE_INTEGER v5; // rcx
	unsigned __int64 v6; // rdi
	char* v7; // rsi
	signed int result; // eax
	__int64 v10; // r8
	HANDLE FileW; // rax
	DWORD v12; // r8d
	__int64 v13; // rax
	DWORD NumberOfBytesWritten; // [rsp+40h] [rbp-258h] BYREF
	int FileName[132]; // [rsp+50h] [rbp-248h] BYREF

	v5 = *(LARGE_INTEGER*)(a1 + 40);
	v6 = a4;
	v7 = a3;
	if (a2.QuadPart > (unsigned __int64)v5.QuadPart || a4 + a2.QuadPart > v5.QuadPart)
		return -2147024809;
	if (!a4)
		return 0;
	if (!a3)
		return -2147024809;
	if (*(_DWORD*)(a1 + 64) == 3)
	{
		if (*(_QWORD*)(a1 + 48) == -1i64)
			return -2147467259;
		goto LABEL_10;
	}
	SHCreateDirectory(0i64, (PCWSTR)(*(_QWORD*)(a1 + 8) + 8i64));
	sub_1401C0D10(*(_QWORD*)(a1 + 8), FileName, v10, a1 + 16);
	FileW = CreateFileW((LPCWSTR)FileName, 0x40000000u, 0, 0i64, 4u, 0x80u, 0i64);
	*(_QWORD*)(a1 + 48) = FileW;
	if (FileW != (HANDLE)-1i64)
	{
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_DWORD*)(a1 + 64) = 3;
	LABEL_10:
		if (*(_QWORD*)(a1 + 56) == a2.QuadPart)
			goto LABEL_13;
		if (SetFilePointerEx(*(HANDLE*)(a1 + 48), a2, 0i64, 0))
		{
			*(LARGE_INTEGER*)(a1 + 56) = a2;
			while (1)
			{
			LABEL_13:
				v12 = 0x80000000;
				if (v6 < 0x80000000)
					v12 = v6;
				if (!WriteFile(*(HANDLE*)(a1 + 48), v7, v12, &NumberOfBytesWritten, 0i64))
					break;
				v13 = NumberOfBytesWritten;
				*(_QWORD*)(a1 + 56) += NumberOfBytesWritten;
				v7 += v13;
				v6 -= v13;
				if (!v6)
					return 0;
			}
		}
	}
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 1401D4D49: variable 'v10' is possibly undefined
// 1401D4CC0: using guessed type int FileName[132];


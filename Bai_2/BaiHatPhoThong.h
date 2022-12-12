#pragma once
#include "BaiHat.h"
class BaiHatPhoThong: public BaiHat
{
public:
	BaiHatPhoThong();
	BaiHatPhoThong(string Ten, string Loi, string TenCaSi, string TheLoai, int NamSangTac, long long int LuotNghe);
	void Input();
	void Output();
	string LoaiBaiHat(); // ban quyen
};


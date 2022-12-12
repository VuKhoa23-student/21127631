#pragma once
#include "BaiHat.h"
class BaiHatBanQuyen: public BaiHat
{
	long long int GiaTriBanQuyen;
public:
	BaiHatBanQuyen();
	BaiHatBanQuyen(string Ten, string Loi, string TenCaSi, string TheLoai, int NamSangTac, long long int LuotNghe, string XuatXu, long long int GiaTriBanQuyen);
	void Input();
	void Output();
	string LoaiBaiHat(); // ban quyen
};


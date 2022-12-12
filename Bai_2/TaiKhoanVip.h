#pragma once
#include "TaiKhoan.h"
class TaiKhoanVip:public TaiKhoan
{
public:
	TaiKhoanVip();
	TaiKhoanVip(string TaiKhoan, string MatKhau, PlayList listOfSongs);
	void Input();
	void Output();
	string LoaiTaiKhoan();
	void set_TienMuaBanQuyen(long long int TienMuaBanQuyen);
};


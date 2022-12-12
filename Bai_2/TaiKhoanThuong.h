#pragma once
#include "TaiKhoan.h"
class TaiKhoanThuong:public TaiKhoan
{
public:
	TaiKhoanThuong();
	TaiKhoanThuong(string TaiKhoan, string MatKhau,PlayList listOfSongs);
	void Input();
	void Output();
	string LoaiTaiKhoan();
	PlayList get_listOfSongs();
	void set_TienMuaBanQuyen(long long int TienMuaBanQuyen);
};


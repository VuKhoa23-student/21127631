#pragma once
#include <iostream>
#include <string>
#include "PlayList.h"

using namespace std;

class TaiKhoan
{
protected:
	string TenTaiKhoan;
	string MatKhau;
	long long int TienMuaBanQuyen;
	PlayList listOfSongs;
public:
	virtual void Input() = 0;
	virtual void Output() = 0;
	virtual string LoaiTaiKhoan() = 0;
	virtual void set_TienMuaBanQuyen(long long int TienMuaBanQuyen) = 0;
	long long int get_TienMuaBanQuyen();
	bool isValidate();
};


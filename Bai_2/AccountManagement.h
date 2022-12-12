#pragma once
#include "TaiKhoan.h"
#include "TaiKhoanThuong.h"
#include "TaiKhoanVip.h"
class AccountManagement
{
private:
	vector<TaiKhoan*> listOf_TaiKhoan;
public:
	vector<TaiKhoan*> get_listOf_TaiKhoan();
	void addTaiKhoan_Thuong();
	void addTaiKhoan_Vip();
};


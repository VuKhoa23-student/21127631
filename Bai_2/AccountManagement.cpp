#include "AccountManagement.h"

vector<TaiKhoan*> AccountManagement::get_listOf_TaiKhoan()
{
	return listOf_TaiKhoan;
}
void AccountManagement::addTaiKhoan_Thuong()
{	
	TaiKhoanThuong* A = new TaiKhoanThuong;
	A->Input();
	listOf_TaiKhoan.push_back(A);
}
void AccountManagement::addTaiKhoan_Vip()
{
	TaiKhoanVip* A = new TaiKhoanVip;
	A->Input();
	listOf_TaiKhoan.push_back(A);
}

#include "TaiKhoanThuong.h"

TaiKhoanThuong::TaiKhoanThuong()
{
	TenTaiKhoan = "unknown";
	MatKhau = "0";
}
TaiKhoanThuong::TaiKhoanThuong(string TenTaiKhoan, string MatKhau, PlayList listOfSongs)
{
	this->listOfSongs = listOfSongs;
	this->TenTaiKhoan = TenTaiKhoan;
	this->MatKhau = MatKhau;
}
void TaiKhoanThuong::set_TienMuaBanQuyen(long long int TienMuaBanQuyen)
{
	if (TienMuaBanQuyen < 0)
		TienMuaBanQuyen = 0;
	this->TienMuaBanQuyen = TienMuaBanQuyen;
}

void TaiKhoanThuong::Input()
{
	cout << "Nhap tai khoan can tao: ";
	getline(cin >> ws, TenTaiKhoan);
	cout << "Nhap mat khau can tao: ";
	getline(cin >> ws, MatKhau);
	while (!isValidate())
	{
		cout << "Nhap lai mat khau ! \n";
		cout << "Nhap mat khau can tao: ";
		getline(cin >> ws, MatKhau);
	}
	cout << "Tao tai khoan thanh cong,";
	system("pause");
}

void TaiKhoanThuong::Output()
{
	cout << "Ten tai khoan: " << TenTaiKhoan << endl;
	cout << "Mat khau: " << MatKhau << endl;
}

string TaiKhoanThuong::LoaiTaiKhoan()
{
	return "Thuong";
}

PlayList TaiKhoanThuong::get_listOfSongs()
{
	return listOfSongs;
}
#include "TaiKhoanVip.h"

TaiKhoanVip::TaiKhoanVip()
{
	TenTaiKhoan = "unknown";
	MatKhau = "unknown";
}
TaiKhoanVip::TaiKhoanVip(string TaiKhoan, string MatKhau, PlayList listOfSongs)
{
	this->TenTaiKhoan = TenTaiKhoan;
	this->MatKhau = MatKhau;
	this->listOfSongs = listOfSongs;
}
void TaiKhoanVip::set_TienMuaBanQuyen(long long int TienMuaBanQuyen)
{
	if (TienMuaBanQuyen < 0)
	{
		this->TienMuaBanQuyen = 0;
	}
	else
	{
		this->TienMuaBanQuyen = TienMuaBanQuyen / 2;
	}
}

void TaiKhoanVip::Input()
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

void TaiKhoanVip::Output()
{
	cout << "Ten tai khoan: " << TenTaiKhoan << endl;
	cout << "Mat khau: " << MatKhau << endl;
}

string TaiKhoanVip::LoaiTaiKhoan()
{
	return "Vip";
}

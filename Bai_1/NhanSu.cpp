#include "NhanSu.h"

NhanSu::NhanSu()
{
	HoTen = "unknown";
	NgaySinh = "unknown";
	ID = "unknown";
}

NhanSu::NhanSu(string HoTen, string NgaySinh, string ID)
{
	this->HoTen = HoTen;
	this->NgaySinh = NgaySinh;
	this->ID = ID;
}

string NhanSu::get_HoTen()
{
	return HoTen;
}
string NhanSu::get_NgaySinh()
{
	return NgaySinh;
}
string NhanSu::get_ID()
{
	return ID;
}
void NhanSu::set_HoTen(string HoTen)
{
	this->HoTen = HoTen;
}
void NhanSu::set_NgaySinh(string NgaySinh)
{
	this->NgaySinh = NgaySinh;
}
void NhanSu::set_ID(string ID)
{
	this->ID = ID;
}

void NhanSu::Input()
{
	cout << "Nhap Ho Ten: ";
	getline(cin >> ws, HoTen);
	cout << "Nhap ngay sinh: ";
	getline(cin >> ws, NgaySinh);
	cout << "Nhap ID: ";
	getline(cin >> ws, ID);
}


void NhanSu::Output()
{
	cout << "Ho Ten: " << HoTen << endl;
	cout << "Ngay sinh: " << NgaySinh << endl;
	cout << "ID: " << ID;
}

long double NhanSu::TinhLuong()
{
	return 0;
}

string NhanSu::LoaiNhanSu()
{
	return "Nhan Su";
}
#include "TroGiang.h"

TroGiang::TroGiang()
{
	SoMonTroGiang = 0;
}

TroGiang::TroGiang(int SoMonTroGiang)
{
	this->SoMonTroGiang = SoMonTroGiang;
}

void TroGiang::set_SoMonTroGiang(int SoMonTroGiang)
{
	if (SoMonTroGiang < 0)
		SoMonTroGiang = 0;
	this->SoMonTroGiang = SoMonTroGiang;
}

int TroGiang::get_SoMonTroGiang()
{
	return SoMonTroGiang;
}

void TroGiang::Output()
{
	cout << "Ho Ten: " << HoTen << endl;
	cout << "Ngay sinh: " << NgaySinh << endl;
	cout << "ID: " << ID << endl;
	cout << "So mon tro giang: " << SoMonTroGiang << endl;
}

void TroGiang::Input()
{
	cout << "Nhap Ho Ten: ";
	getline(cin >> ws, HoTen);
	cout << "Nhap ngay sinh: ";
	getline(cin >> ws, NgaySinh);
	cout << "Nhap ID: ";
	getline(cin >> ws, ID);
	cout << "Nhap so mon tro giang: ";
	int temp;
	cin >> temp;
	set_SoMonTroGiang(temp);
}

long double TroGiang::TinhLuong()
{
	return (SoMonTroGiang * 0.3) * 18000;
}

string TroGiang::LoaiNhanSu()
{
	return "Tro giang";
}


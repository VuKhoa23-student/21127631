#include "ThucTapSinh.h"

ThucTapSinh::ThucTapSinh()
{
	DanhSachDuAnDuBi = {};
}
ThucTapSinh::ThucTapSinh(vector<DuAn> DanhSachDuAnDuBi)
{
	this->DanhSachDuAnDuBi = DanhSachDuAnDuBi;
}
void ThucTapSinh::set_DanhSachDuAnDuBi(vector<DuAn> DanhSachDuAnDuBi)
{
	this->DanhSachDuAnDuBi = DanhSachDuAnDuBi;
}
vector<DuAn> ThucTapSinh::get_DanhSachDuAnDuBi()
{
	return DanhSachDuAnDuBi;
}
void ThucTapSinh::Input()
{
	string temp;
	int temp_int;
	cout << "Nhap Ho ten: ";
	getline(cin >> ws, temp);
	set_HoTen(temp);

	cout << "Nhap Ngay sinh: ";
	getline(cin >> ws, temp);
	set_NgaySinh(temp);

	cout << "Nhap ID: ";
	getline(cin >> ws, temp);
	set_ID(temp);

	cout << "Nhap so du an dang thuc tap: ";
	cin >> temp_int;
	vector<DuAn> temp_list;
	for (int i = 0; i < temp_int; i++)
	{
		DuAn temp_DuAn;
		cin >> temp_DuAn;
		while ((!temp_DuAn.valid()) || ((temp_DuAn.get_ID()[0] != 'r') && (temp_DuAn.get_ID()[0] != 'R')))
		{
			cout << "Nhap lai ID du an ! \n";
			cin >> temp_DuAn;
		}
		temp_list.push_back(temp_DuAn);
	}
	DanhSachDuAnDuBi.clear();
	set_DanhSachDuAnDuBi(temp_list);
}
void ThucTapSinh::Output()
{
	cout << "Ho Ten: " << get_HoTen() << endl;
	cout << "Ngay sinh: " << get_NgaySinh() << endl;
	cout << "ID: " << get_ID() << endl;
	if (!get_DanhSachDuAnDuBi().empty())
	{
		cout << "--Danh sach du an dang tham gia--\n";
		for (int i = 0; i < get_DanhSachDuAnDuBi().size(); i++)
		{
			cout << i + 1 << ") " << get_DanhSachDuAnDuBi()[i] << endl;
		}
	}
	cout << endl;
}
long double ThucTapSinh::TinhLuong()
{
	return (10/100) * (DanhSachDuAnDuBi.size() * 10000);
}
string ThucTapSinh::LoaiNhanSu()
{
	return "Thuc Tap Sinh";
}

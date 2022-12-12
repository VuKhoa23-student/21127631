#include "GiangVien.h"

GiangVien::GiangVien()
{
	HocHam = "unknown";
	HocVi = "unknown";
	SoNamGiangDay = 0;
}
GiangVien::GiangVien(string HoTen, string NgaySinh, string ID, string HocHam, string HocVi, int SoNamGiangDay, vector<MonHoc> DanhSachMonHoc)
{
	this->HoTen = HoTen;
	this->NgaySinh = NgaySinh;
	this->ID = ID;
	this->HocHam = HocHam;
	this->HocVi = HocVi;
	this->SoNamGiangDay = SoNamGiangDay;
	this->DanhSachMonHoc = DanhSachMonHoc;
}

string GiangVien::get_HocHam()
{
	return HocHam;
}
string GiangVien::get_HocVi()
{
	return HocVi;
}
int GiangVien::get_SoNamGiangDay()
{
	return SoNamGiangDay;
}
vector<MonHoc> GiangVien::get_DanhSachMonHoc()
{
	return DanhSachMonHoc;
}

void GiangVien::set_HocHam(string HocHam)
{
	this->HocHam = HocHam;
}
void GiangVien::set_HocVi(string HocVi)
{
	this->HocVi = HocVi;
}
void GiangVien::set_SoNamGiangDay(int SoNamGiangDay)
{
	if (SoNamGiangDay < 0)
		SoNamGiangDay = 0;
	this->SoNamGiangDay = SoNamGiangDay;
}
void GiangVien::set_DanhSachMonHoc(vector<MonHoc> DanhSachMonHoc)
{
	this->DanhSachMonHoc = DanhSachMonHoc;
}

void GiangVien::Input()
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

	cout << "Nhap Hoc ham: ";
	getline(cin >> ws, temp);
	set_HocHam(temp);

	cout << "Nhap Hoc vi: ";
	getline(cin >> ws, temp);
	set_HocVi(temp);

	cout << "Nhap so nam giang day: ";
	cin >> temp_int;
	set_SoNamGiangDay(temp_int);

	cout << "Nhap so mon giang day: ";
	cin >> temp_int;
	vector<MonHoc> temp_DS;
	for (int i = 0; i < temp_int; i++)
	{
		cout << "Nhap ten mon hoc thu " << i + 1 << "\n";
		MonHoc A;
		cin >> A;
		temp_DS.push_back(A);
	}
	DanhSachMonHoc.clear();
	set_DanhSachMonHoc(temp_DS);
}

void GiangVien::Output()
{
	cout << "Ho Ten: " << get_HoTen() << endl;
	cout << "Ngay sinh: " << get_NgaySinh() << endl;
	cout << "ID: " << get_ID() << endl;
	cout << "Hoc ham: " << get_HocHam() << endl;
	cout << "Hoc vi: " << get_HocVi() << endl;
	cout << "So nam giang day: " << get_SoNamGiangDay() << endl;
	if (!get_DanhSachMonHoc().empty())
	{
		cout << "--Danh sach cac mon dang day--\n";
	}
	for (int i = 0; i < get_DanhSachMonHoc().size(); i++)
	{
		cout << i + 1 << ") " << get_DanhSachMonHoc()[i] << endl;
	}
}

long double GiangVien::TinhLuong()
{
	return (DanhSachMonHoc.size() * SoNamGiangDay * 0.12) * 20000;
}

string GiangVien::LoaiNhanSu()
{
	return "Giang vien";
}

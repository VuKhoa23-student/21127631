#include "ChuyenVien.h"

ChuyenVien::ChuyenVien()
{
	DanhSachDuAnDaHoanThanh = {};
	SoNamLamViec = 0;
}

ChuyenVien::ChuyenVien(vector<DuAn> DanhSachDuAnDaHoanThanh, int SoNamLamViec)
{
	this->DanhSachDuAnDaHoanThanh = DanhSachDuAnDaHoanThanh;
	this->SoNamLamViec = SoNamLamViec;
}

vector<DuAn> ChuyenVien::get_DanhSachDuAnDaHoanThanh()
{
	return DanhSachDuAnDaHoanThanh;
}

int ChuyenVien::get_SoNamLamViec()
{
	return SoNamLamViec;
}

void ChuyenVien::set_DanhSachDuAnDaHoanThanh(vector<DuAn> DanhSachDuAnDaHoanThanh)
{
	this->DanhSachDuAnDaHoanThanh = DanhSachDuAnDaHoanThanh;
}

void ChuyenVien::set_SoNamLamViec(int SoNamLamViec)
{
	if (SoNamLamViec < 0)
		SoNamLamViec = 0;
	this->SoNamLamViec = SoNamLamViec;
}

void ChuyenVien::Input()
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

	cout << "Nhap so du an da tham gia: ";
	cin >> temp_int;
	vector<DuAn> temp_list;
	for (int i = 0; i < temp_int; i++)
	{
		DuAn temp_DuAn;
		cin >> temp_DuAn;
		while (!temp_DuAn.valid())
		{
			cout << "Nhap lai ID du an ! \n";
			cin >> temp_DuAn;
		}
		temp_list.push_back(temp_DuAn);
	}
	DanhSachDuAnDaHoanThanh.clear();
	set_DanhSachDuAnDaHoanThanh(temp_list);

	cout << "Nhap so nam kinh nghiem lam viec cuu: ";
	cin >> temp_int;
	set_SoNamLamViec(temp_int);
}

void ChuyenVien::Output()
{
	cout << "Ho Ten: " << get_HoTen() << endl;
	cout << "Ngay sinh: " << get_NgaySinh() << endl;
	cout << "ID: " << get_ID() << endl;
	if (!get_DanhSachDuAnDaHoanThanh().empty())
		cout << "--Danh sach du an da tham gia--\n";
	for (int i = 0; i < get_DanhSachDuAnDaHoanThanh().size(); i++)
	{
		cout << i + 1 << ") " << get_DanhSachDuAnDaHoanThanh()[i] << endl;
	}
	cout << "So nam lam viec: " << get_SoNamLamViec();
	cout << endl;
}

long double ChuyenVien::TinhLuong()
{
	int SoDuAnBatDauBangChu_T = 0;
	for (int i = 0; i < DanhSachDuAnDaHoanThanh.size(); i++)
	{
		if (DanhSachDuAnDaHoanThanh[i].get_ID()[0] == 'T' || DanhSachDuAnDaHoanThanh[i].get_ID()[0] == 't')
		{
			SoDuAnBatDauBangChu_T += 1;
		}
	}
	return (SoNamLamViec * 4 + SoDuAnBatDauBangChu_T) * 18000;
}

string ChuyenVien::LoaiNhanSu()
{
	return "Chuyen vien";
}

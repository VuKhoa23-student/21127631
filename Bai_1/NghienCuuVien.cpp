#include "NghienCuuVien.h"

NghienCuuVien::NghienCuuVien()
{
	DanhSachDuAnDangThamGia = {};
	SoNamNghienCuu = 0;
}

NghienCuuVien::NghienCuuVien(vector<DuAn> DanhSachDuAnDangThamGia, int SoNamNghienCuu)
{
	this->DanhSachDuAnDangThamGia = DanhSachDuAnDangThamGia;
	this->SoNamNghienCuu = SoNamNghienCuu;
}

vector<DuAn> NghienCuuVien::get_DanhSachDuAnDangThamGia()
{
	return DanhSachDuAnDangThamGia;
}

int NghienCuuVien::get_SoNamNghienCuu()
{
	return SoNamNghienCuu;
}

void NghienCuuVien::set_DanhSachDuAnDangThamGia(vector<DuAn> DanhSachDuAnDangThamGia)
{
	this->DanhSachDuAnDangThamGia = DanhSachDuAnDangThamGia;
}

void NghienCuuVien::set_SoNamNghienCuu(int SoNamNghienCuu)
{
	if (SoNamNghienCuu < 0)
		SoNamNghienCuu = 0;
	this->SoNamNghienCuu = SoNamNghienCuu;
}

void NghienCuuVien::Input()
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

	cout << "Nhap so du an dang tham gia: ";
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
	DanhSachDuAnDangThamGia.clear();
	set_DanhSachDuAnDangThamGia(temp_list);

	cout << "Nhap so nam kinh nghiem nghien cuu: ";
	cin >> temp_int;
	set_SoNamNghienCuu(temp_int);
}

void NghienCuuVien::Output()
{
	cout << "Ho Ten: " << get_HoTen() << endl;
	cout << "Ngay sinh: " << get_NgaySinh() << endl;
	cout << "ID: " << get_ID() << endl;
	if (!get_DanhSachDuAnDangThamGia().empty())
		cout << "--Danh sach du an dang tham gia--\n";
	for (int i = 0; i < get_DanhSachDuAnDangThamGia().size(); i++)
	{
		cout << i + 1 << ") " << get_DanhSachDuAnDangThamGia()[i] << endl;
	}
	cout << "So nam nghien cuu: " << get_SoNamNghienCuu() << endl;

}

long double NghienCuuVien::TinhLuong()
{
	int SoDuAnBatDauBangChu_D = 0;
	for (int i = 0; i < DanhSachDuAnDangThamGia.size(); i++)
	{
		if (DanhSachDuAnDangThamGia[i].get_ID()[0] == 'D' || DanhSachDuAnDangThamGia[i].get_ID()[0] == 'd')
		{
			SoDuAnBatDauBangChu_D += 1;
		}
	}
	return (SoNamNghienCuu * 2 + SoDuAnBatDauBangChu_D) * 20000;
}

string NghienCuuVien::LoaiNhanSu()
{
	return "Nghien cuu vien";
}

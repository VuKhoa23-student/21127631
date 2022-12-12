#pragma once
#include "NhanSu.h"
#include "DuAn.h"
#include <vector>

class ChuyenVien: public NhanSu
{
	vector<DuAn> DanhSachDuAnDaHoanThanh;
	int SoNamLamViec;
public:
	ChuyenVien();
	ChuyenVien(vector<DuAn>  DanhSachDuAnDaHoanThanh, int SoNamLamViec);
	void set_DanhSachDuAnDaHoanThanh(vector<DuAn> DanhSachDuAnDaHoanThanh);
	void set_SoNamLamViec(int SoNamLamViec);
	vector<DuAn> get_DanhSachDuAnDaHoanThanh();
	int get_SoNamLamViec();
	void Input();
	void Output();
	long double TinhLuong();
	string LoaiNhanSu();
};


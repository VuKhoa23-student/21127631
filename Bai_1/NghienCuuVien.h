#pragma once
#include "DuAn.h"
#include "NhanSu.h"
#include <vector>
class NghienCuuVien:public NhanSu
{
	vector<DuAn> DanhSachDuAnDangThamGia;
	int SoNamNghienCuu;
public:
	NghienCuuVien();
	NghienCuuVien(vector<DuAn>  DanhSachDuAnDangThamGia, int SoNamNghienCuu);
	void set_DanhSachDuAnDangThamGia(vector<DuAn> DanhSachDuAnDangThamGia);
	void set_SoNamNghienCuu(int SoNamNghienCuu);
	vector<DuAn> get_DanhSachDuAnDangThamGia();
	int get_SoNamNghienCuu();
	void Input();
	void Output();
	long double TinhLuong();
	string LoaiNhanSu();
};


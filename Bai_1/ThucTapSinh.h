#pragma once
#include "NhanSu.h"
#include "DuAn.h"
#include <vector>
	
class ThucTapSinh:public NhanSu
{
	vector<DuAn> DanhSachDuAnDuBi;
public:
	ThucTapSinh();
	ThucTapSinh(vector<DuAn>  DanhSachDuAnDuBi);
	void set_DanhSachDuAnDuBi(vector<DuAn> DanhSachDuAnDuBi);
	vector<DuAn> get_DanhSachDuAnDuBi();
	void Input();
	void Output();
	long double TinhLuong();
	string LoaiNhanSu();
};


#pragma once
#include "NhanSu.h"
#include "MonHoc.h"
#include <vector>
class GiangVien:public NhanSu
{
private:
	string HocHam;
	string HocVi;
	int SoNamGiangDay;
	vector<MonHoc> DanhSachMonHoc;
public:
	string LoaiNhanSu();
	long double TinhLuong();
	void Input();
	void Output();
	GiangVien();
	GiangVien(string HoTen, string NgaySinh, string ID, string HocHam, string HocVi, int SoNamGiangDay, vector<MonHoc> DanhSachMonHoc);
	string get_HocHam();
	string get_HocVi();
	int get_SoNamGiangDay();
	vector<MonHoc> get_DanhSachMonHoc();
	void set_HocHam(string);
	void set_HocVi(string);
	void set_SoNamGiangDay(int);
	void set_DanhSachMonHoc(vector<MonHoc>);
};


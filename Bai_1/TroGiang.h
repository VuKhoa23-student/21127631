#pragma once
#include "NhanSu.h"
class TroGiang:public NhanSu
{
private:
	int SoMonTroGiang;
public:
	TroGiang();
	TroGiang(int);
	void Output();
	void Input();
	long double TinhLuong();
	string LoaiNhanSu();
	int get_SoMonTroGiang();
	void set_SoMonTroGiang(int);
};


#pragma once
#include <iostream>
#include <string>

using namespace std;


class NhanSu
{
protected:
	string HoTen;
	string NgaySinh;
	string ID;
public:
	virtual string LoaiNhanSu(); // tra ve chuc vu cua nhan su
	virtual void Input();
	virtual void Output();
	virtual long double TinhLuong();
	NhanSu();
	NhanSu(string HoTen, string NgaySinh, string ID);
	string get_HoTen();
	string get_NgaySinh();
	string get_ID();
	void set_HoTen(string);
	void set_NgaySinh(string);
	void set_ID(string);
};


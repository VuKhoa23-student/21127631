#pragma once
#include <iostream>
#include <string>

using namespace std;
class BaiHat
{
protected:
	string Ten;
	string Loi;
	string TenCaSi;
	string TheLoai;
	int NamSangTac;
	long long int LuotNghe;
	string XuatXu; // vietnam, au my, han quoc
public:
	virtual string LoaiBaiHat() = 0; // pho thong hoac ban quyen
	virtual void Input() = 0;
	virtual void Output() = 0;
	long long int get_LuotNghe();
	string get_Ten();
	string get_Loi();
	string get_TenCaSi();
	string get_TheLoai();
};


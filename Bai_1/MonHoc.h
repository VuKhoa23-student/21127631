#pragma once
#include <iostream>
#include <string>
using namespace std;

class MonHoc
{
private:
	string Ten;
public:
	MonHoc();
	MonHoc(string Ten);
	string get_Ten();
	void set_Ten(string);
	friend istream& operator>>(istream& is, MonHoc& A);
	friend ostream& operator<<(ostream& os, MonHoc A);
};


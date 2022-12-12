#pragma once
#include <iostream>
#include <string>

using namespace std;

class DuAn
{
	string ID;
public:
	DuAn();
	DuAn(string ID);
	string get_ID();
	void set_ID(string);
	bool valid(); // kiem tra dinh dang cua ma du an
	friend istream& operator>>(istream& is, DuAn& A);
	friend ostream& operator<<(ostream& os, DuAn& A);
};


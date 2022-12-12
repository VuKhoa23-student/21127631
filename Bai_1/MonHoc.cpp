#include "MonHoc.h"

MonHoc::MonHoc()
{
	Ten = "unknown";
}

MonHoc::MonHoc(string Ten)
{
	this->Ten = Ten;
}

void MonHoc::set_Ten(string Ten)
{
	this->Ten = Ten;
}

string MonHoc::get_Ten()
{
	return Ten;
}

istream& operator>>(istream& is, MonHoc& A)
{
	string temp;
	cout << "Nhap ten mon hoc: ";
	getline(is >> ws, temp);
	A.set_Ten(temp);
	return is;
}
ostream& operator<<(ostream& os, MonHoc A)
{
	os << "Ten mon hoc: " << A.get_Ten();
	return os;
}
#include "DuAn.h"

DuAn::DuAn()
{
	ID = "X00";
}

DuAn::DuAn(string ID)
{
	this->ID = ID;
}

void DuAn::set_ID(string ID)
{
	this->ID = ID;
}

string DuAn::get_ID()
{
	return ID;
}

istream& operator>>(istream& is, DuAn& A)
{
	string temp;
	cout << "Nhap ID du an: ";
	getline(is >> ws, temp);
	A.set_ID(temp);
	return is;
}
ostream& operator<<(ostream& os,DuAn& A)
{
	os << "ID du an: " << A.get_ID();
	return os;
}

bool DuAn::valid()
{
	if (ID.size() != 3)
		return false;
	if ((ID[0] < 'a' || ID[0] > 'z') && (ID[0] < 'A' || ID[0] > 'Z'))
	return false;
	if (ID[1] < '0' || ID[1] > '9')
		return false;
	if (ID[2] < '0' || ID[2] > '9')
		return false;
	return true;
}
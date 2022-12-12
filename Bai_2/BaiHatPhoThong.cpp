#include "BaiHatPhoThong.h"

BaiHatPhoThong::BaiHatPhoThong()
{
	Ten = "unknown";
	Loi = "unknown";
	TenCaSi = "unknown";
	TheLoai = "unknown";
	NamSangTac = 0;
	LuotNghe = 0;
	XuatXu = "unknown";
}
BaiHatPhoThong::BaiHatPhoThong(string Ten, string Loi, string TenCaSi, string TheLoai, int NamSangTac, long long int LuotNghe)
{
	this->Ten = Ten;
	this->Loi = Loi;
	this->TenCaSi = TenCaSi;
	this->TheLoai = TheLoai;
	this->NamSangTac = 0;
	this->LuotNghe = NamSangTac;
	this->XuatXu = XuatXu;
}


void BaiHatPhoThong::Input()
{
	cout << "Nhap ten bai hat: ";
	getline(cin >> ws, Ten);

	cout << "Nhap loi bai hat: ";
	getline(cin >> ws, Loi);

	cout << "Nhap ten ca si: ";
	getline(cin >> ws, TenCaSi);

	cout << "Nhap the loai nhac: ";
	getline(cin >> ws, TheLoai);

	cout << "Nhap nam sang tac: ";
	cin >> NamSangTac;

	cout << "Nhap luot nghe: ";
	cin >> LuotNghe;
}

void BaiHatPhoThong::Output()
{
	cout << "Ten bai hat: " << Ten << endl;

	cout << "Loi bai hat: " << Loi << endl;

	cout << "Ten ca si: " << TenCaSi << endl;

	cout << "The loai nhac: " << TheLoai << endl;

	cout << "Nam sang tac: " << NamSangTac << endl;

	cout << "Luot nghe: " << LuotNghe << endl;

}
string BaiHatPhoThong::LoaiBaiHat()
{
	return "Pho thong";
}

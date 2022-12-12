#include "BaiHatBanQuyen.h"

BaiHatBanQuyen::BaiHatBanQuyen()
{
	Ten = "unknown";
	Loi = "unknown";
	TenCaSi = "unknown";
	TheLoai = "unknown";
	NamSangTac = 0;
	LuotNghe = 0;
	XuatXu = "unknown";
	GiaTriBanQuyen = 0;
}
BaiHatBanQuyen::BaiHatBanQuyen(string Ten, string Loi, string TenCaSi, string TheLoai, int NamSangTac, long long int LuotNghe, string XuatXu, long long int GiaTriBanQuyen)
{
	this->Ten = Ten;
	this->Loi = Loi;
	this->TenCaSi = TenCaSi;
	this->TheLoai = TheLoai;
	this->NamSangTac = 0;
	this->LuotNghe = NamSangTac;
	this->XuatXu = XuatXu;
	this->GiaTriBanQuyen = GiaTriBanQuyen;
}


void BaiHatBanQuyen::Input()
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

	cout << "Nhap gia tri ban quyen: ";
	cin >> GiaTriBanQuyen;
}

void BaiHatBanQuyen::Output()
{
	cout << "Ten bai hat: " << Ten << endl;

	cout << "Loi bai hat: " << Loi << endl;

	cout << "Ten ca si: " << TenCaSi << endl;

	cout << "The loai nhac: " << TheLoai << endl;

	cout << "Nam sang tac: " << NamSangTac << endl;

	cout << "Luot nghe: " << LuotNghe << endl;

	cout << "Gia tri ban quyen: " << GiaTriBanQuyen << " VND" << endl;
}
string BaiHatBanQuyen::LoaiBaiHat()
{
	return "Ban quyen";
}

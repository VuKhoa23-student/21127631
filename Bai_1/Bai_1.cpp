#include "NhanSu.h"

#include "GiangVien.h"
#include "TroGiang.h"
#include "MonHoc.h"

#include "NghienCuuVien.h"
#include "ChuyenVien.h"
#include "DuAn.h"

#include "ThucTapSinh.h"


int main()
{
	// list nhan su
	vector<NhanSu*> list;
	GiangVien* a1 = new GiangVien;
	TroGiang* a2 = new TroGiang;
	NghienCuuVien* a3 = new NghienCuuVien;
	ChuyenVien* a4 = new ChuyenVien;
	ThucTapSinh* a5 = new ThucTapSinh;
	list.push_back(a1);
	list.push_back(a2);
	list.push_back(a3);
	list.push_back(a4);
	list.push_back(a5);
	// nhap thong tin
	for (int i = 0; i < list.size(); i++)
	{
		cout << "Chuc vu: " << list[i]->LoaiNhanSu() << endl;
		list[i]->Input();
		cout << endl;
	}
	// xuat thong tin
	cout << "--DANH SACH VUA NHAP--\n";
	for (int i = 0; i < list.size(); i++)
	{
		cout << "Chuc vu: " << list[i]->LoaiNhanSu() << endl;
		list[i]->Output();
		cout << endl;
	}
	// tinh tong luong
	long double totalSalary = 0;
	for (int i = 0; i < list.size(); i++)
	{
		totalSalary += list[i]->TinhLuong();
	}
	cout << "Tong luong phai tra : " << totalSalary << " VND\n";

	// tim max luong
	NhanSu* highest_Salary = list[0];
	for (int i = 1; i < list.size(); i++)
	{
		if (list[i]->TinhLuong() > highest_Salary->TinhLuong())
		{
			highest_Salary = list[i];
		}
	}

	cout << "--NHAN SU DUOC TRA LUONG NHIEU NHAT--\n";
	cout << "Chuc vu: " << highest_Salary->LoaiNhanSu() << endl;
	highest_Salary->Output();
	cout << endl;
	// xoa list
	for (int i = 0; i < list.size(); i++)
	{
		delete list[i];
	}
	list.clear();
	return 0;
}
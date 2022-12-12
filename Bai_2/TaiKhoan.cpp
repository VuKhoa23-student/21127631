#include "TaiKhoan.h"

long long int TaiKhoan::get_TienMuaBanQuyen()
{
	return TienMuaBanQuyen;
}

bool TaiKhoan::isValidate()
{
	if (MatKhau.size() < 8)
		return false;
	for (int i = 0; i < MatKhau.size(); i++)
	{
		if (MatKhau[i] == ' ')
			return false;
	}
	return true;
}

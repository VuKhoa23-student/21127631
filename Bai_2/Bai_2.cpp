#include "BaiHat.h"
#include "BaiHatBanQuyen.h"
#include "BaiHatPhoThong.h"
#include "PlayList.h"
#include "TaiKhoan.h"
#include "TaiKhoanThuong.h"
#include "TaiKhoanVip.h"
#include "AccountManagement.h"

int main()
{
	TaiKhoanThuong A;
	A.Input();
	A.get_listOfSongs().addSong();
	A.get_listOfSongs().display();
	return 0;
}

#include "PlayList.h"

PlayList::PlayList()
{
	playList = {};
}


PlayList::PlayList(vector<BaiHat*> playList)
{
	this->playList = playList;
}
void PlayList::topFiveSongs()
{
	if (playList.size() < 5)
	{
		display();
	}
	else
	{
		for (int i = 0; i < playList.size() - 1; i++)
		{
			for (int j = i + 1; j < playList.size(); j++)
			{
				if (playList[i]->get_LuotNghe() < playList[j]->get_LuotNghe())
				{
					BaiHat* temp = playList[i];
					playList[i] = playList[j];
					playList[j] = temp;
				}
			}
			display();
		}
	}
}
void PlayList::addSong()
{
	int choice;
	cout << "Them bai hat, bam 1 de them bai hat pho thong, bam 2 de them bai hat ban quyen: ";
	cin >> choice;
	if (choice == 1)
	{
		BaiHatPhoThong* a = new BaiHatPhoThong;
		a->Input();
		playList.push_back(a);
	}
	else
	{
		BaiHatBanQuyen* a = new BaiHatBanQuyen;
		a->Input();
		playList.push_back(a);
	}
}
void PlayList::deleteSong()
{
	if (playList.empty())
	{
		cout << "Playlist trong !\n";
	}
	else
	{
		cout << "--DANH SACH CAC BAI HAT--\n";
		for (int i = 0; i < playList.size(); i++)
		{
			cout << i + 1 << ") " << playList[i]->LoaiBaiHat() << endl;;
			cout << playList[i]->get_Ten() << endl;
			cout << playList[i]->get_TenCaSi() << endl;
		}
		cout << "Chon so thu tu bai hat can xoa: ";
		int choice;
		cin >> choice;
		if (choice < playList.size());
		playList.erase(playList.begin() + choice);
	}
	
}
void PlayList::display()
{
	if (playList.empty() == 1)
	{
		cout << "Playlist trong !\n";
	}
	else
	{
		cout << "--DANH SACH CAC BAI HAT--\n";
		for (int i = 0; i < playList.size(); i++)
		{
			cout << i + 1 << ") " << playList[i]->LoaiBaiHat() << endl;;
			playList[i]->Output();
		}
	}
}

vector<BaiHat*> PlayList::get_playList()
{
	return playList;
}


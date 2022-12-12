#pragma once
#include "BaiHat.h"
#include "BaiHatBanQuyen.h"
#include "BaiHatPhoThong.h"
#include <vector>
class PlayList
{
	vector<BaiHat*> playList;
public:
	PlayList();
	PlayList(vector<BaiHat*> playList);
	~PlayList()
	{
		if (!playList.empty())
		{
			for (int i = 0; i < playList.size(); i++)
			{
				delete playList[i];
			}
			playList.clear();
		}
	}
	vector<BaiHat*> get_playList();
	void topFiveSongs();
	void addSong();
	void deleteSong();
	void display();
};


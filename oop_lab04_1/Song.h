#pragma once

#include"Genre.h"
#include<string>

class Song
{
private:
	std::string _songTitle;
	int _durationInSeconds;
	Genre _songGenre;

public:
	void SetSongTitle(std::string& songTitle);
	void SetDuration(int durationInSeconds);
	void SetGenre(Genre genre);

	std::string GetSongTitle();
	int GetDuration();
	Genre GetSongGenre();

	std::string WriteSong();
	Song(std::string& songTitle, int durationInSeconds,
		Genre songGenre);
	~Song()
	{

	}
};
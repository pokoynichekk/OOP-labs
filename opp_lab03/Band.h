#pragma once
#include"Album.h"
#include <string>

class Band
{
private:
	std::string _nameBand;
	std::string _description;
	int _albumsCount;
	Album** _albums = nullptr;

public:
	void SetNameBand(std::string& nameBand);
	void SetDescription(std::string& description);
	void SetAlbums(int albumsCount, Album** albums);
	Song* FindSong(std::string& songTitle);
	Album* FindAlbum(Song* song);
	Song** GetAllSongs(int& allSongsCount);
	Song** GetAllGenreSongs(Genre findingGenre, int& allSongsCount);

	std::string GetNameBand();
	std::string GetDescription();
	int GetAlbumsCount();
	Album** GetAlbums();

	Band(std::string& nameBand, std::string& description,
		int albumsCount, Album** albums);
	~Band()
	{
		delete[] this->_albums;
	}
};
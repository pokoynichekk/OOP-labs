#include "Band.h"

using namespace std;

Band::Band(string& nameBand, string& description,
	int albumsCount, Album** albums)
{
	this->SetNameBand(nameBand);
	this->SetDescription(description);
	this->SetAlbums(albumsCount, albums);
}

void Band::SetNameBand(string& nameBand)
{
	this->_nameBand = nameBand;
}

void Band::SetDescription(string& description)
{
	this->_description = description;
}

void Band::SetAlbums(int albumsCount, Album** albums)
{
	delete[] this->_albums;
	this->_albumsCount = albumsCount;
	this->_albums = albums;
}

string Band::GetNameBand()
{
	return this->_nameBand;
}

string Band::GetDescription()
{
	return this->_description;
}

int Band::GetAlbumsCount()
{
	return this->_albumsCount;
}

Album** Band::GetAlbums()
{
	return this->_albums;
}

Song* Band::FindSong(string& songTitle)
{
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		Album* tempAlbum = this->GetAlbums()[i];
		for (int j = 0; j < tempAlbum->GetSongsCount(); j++)
		{
			Song* tempSong = tempAlbum->GetSongs()[j];
			if (tempSong->GetSongTitle() == songTitle)
			{
				return tempSong;
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum(Song* song)
{
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		Album* tempAlbum = this->GetAlbums()[i];
		for (int j = 0; j < tempAlbum->GetSongsCount(); j++)
		{
			if (tempAlbum->GetSongs()[j]->GetSongTitle() ==
				song->GetSongTitle()
				&& tempAlbum->GetSongs()[j]->GetSongGenre() ==
				song->GetSongGenre()
				&& tempAlbum->GetSongs()[j]->GetDuration() ==
				song->GetDuration())
			{
				return tempAlbum;
			}
		}
	}
	return nullptr;
}

Song** Band::GetAllSongs(int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		allSongsCount += this->GetAlbums()[i]->GetSongsCount();
	}
	Song** allSongs = new Song * [allSongsCount];
	int indexAllSongs = 0;
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i]->GetSongsCount(); j++)
		{
			allSongs[indexAllSongs] = this->GetAlbums()[i]->GetSongs()[j];
			indexAllSongs++;
		}
	}
	return allSongs;
}

Song** Band::GetAllGenreSongs(Genre findingGenre, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i]->GetSongsCount(); j++)
		{
			if (this->GetAlbums()[i]->GetSongs()[j]->GetSongGenre()
				== findingGenre)
			{
				allSongsCount++;
			}
		}

	}
	Song** allSongs = new Song * [allSongsCount];
	int indexAllSongs = 0;
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i]->GetSongsCount(); j++)
		{
			if (this->GetAlbums()[i]->GetSongs()[j]->GetSongGenre()
				== findingGenre)
			{
				allSongs[indexAllSongs] = this->GetAlbums()[i]->GetSongs()[j];
				indexAllSongs++;
			}
		}
	}
	return allSongs;
}

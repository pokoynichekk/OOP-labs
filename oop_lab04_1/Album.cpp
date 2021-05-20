#include "Album.h"
#include <exception>

using namespace std;

Album::Album(string& albumTitle, int issueYear, int songsCount,
	Song** songs)
{
	this->SetAlbumTitle(albumTitle);
	this->SetIssueYear(issueYear);
	this->SetSongs(songsCount, songs);
}

void Album::SetAlbumTitle(string& albumTitle)
{
	this->_albumTitle = albumTitle;
}

void Album::SetIssueYear(int issueYear)
{
	if (issueYear < 0)
	{
		throw exception("Issue year cannot be negative");
	}
	this->_issueYear = issueYear;
}

void Album::SetSongs(int songsCount, Song** songs)
{
	delete[] this->_songs;
	this->_songsCount = songsCount;
	this->_songs = songs;
}

string Album::GetAlbumTitle()
{
	return this->_albumTitle;
}

int Album::GetIssueYear()
{
	return this->_issueYear;
}

int Album::GetSongsCount()
{
	return this->_songsCount;
}

Song** Album::GetSongs()
{
	return this->_songs;
}
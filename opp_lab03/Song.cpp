#include"Song.h"
#include<exception>
#include <iostream>

using namespace std;

Song::Song(string& songTitle, int durationInSeconds, Genre songGenre)
{
	this->SetSongTitle(songTitle);
	this->SetDuration(durationInSeconds);
	this->SetGenre(songGenre);
}

void Song::SetSongTitle(string& songTitle)
{
	this->_songTitle = songTitle;
}

void Song::SetDuration(int durationInSeconds)
{
	if (durationInSeconds < 0)
	{
		throw exception("Error");
	}
	this->_durationInSeconds = durationInSeconds;
}

void Song::SetGenre(Genre genre)
{
	this->_songGenre = genre;
}

string Song::GetSongTitle()
{
	return this->_songTitle;
}

int Song::GetDuration()
{
	return this->_durationInSeconds;
}

Genre Song::GetSongGenre()
{
	return this->_songGenre;
}

string Song::WriteSong()
{
	return "Title: " + this->GetSongTitle() + '\t' + "Duration: " +
		to_string(this->GetDuration()) + '\t' + "Genre: " +
		to_string(this->GetSongGenre());
}
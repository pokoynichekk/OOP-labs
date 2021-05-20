#include <iostream>

//#include "Rectangle.h"
//#include "Flight.h"
#include "Band.h"
//#include "Drawing.h"
#include "Ring.h"
#include "CollisionManager.h"
#include "TaskRectangle.h"
#include "FigureScaler.h"

using namespace std;

const int COUNT = 5;

void DemoScale()
{
	TaskRectangle* rectangle1 = new TaskRectangle(10, 15);
	FigureScaler::Scale(rectangle1, 2);
	cout << "Height =" << rectangle1->GetHeight()
		<< "\tWidth = " << rectangle1->GetWidth() << endl << endl;

	TaskRectangle* rectangles[COUNT];
	rectangles[0] = new TaskRectangle(0, 0);
	rectangles[1] = new TaskRectangle(1, 21);
	rectangles[2] = new TaskRectangle(2, 45);
	rectangles[3] = new TaskRectangle(3, 35);
	rectangles[4] = new TaskRectangle(4, 100);
	

	for (int i = 0; i < COUNT; i++)
	{
		FigureScaler::Scale(rectangles[i], 2);
		cout << "Height =" << rectangles[i]->GetHeight()<< "\tWidth = " 
			<< rectangles[i]->GetWidth() << endl;
	}
}

void DemoCollision()
{
	Rectangle* rectangle1 = new Rectangle(10, 3, 0, 0);
	Rectangle* rectangle2 = new Rectangle(14, 7, 1, 1);

	if (CollisionManager::IsCollision(*rectangle1, *rectangle2) == true)
	{
		cout << "Cross\n";
	}
	else
	{
		cout << "Don't Cross\n";
	}
	Ring* ring1 = new Ring(10, 13, 312, 122);
	Ring* ring2 = new Ring(14, 17, 0, 1);

	if (CollisionManager::IsCollision(*ring1, *ring2) == true)
	{
		cout << "Cross\n";
	}
	else
	{
		cout << "Don't Cross\n";
	}
}
void DemoRing()
{
	cout << "Rings Count:" << Ring::GetAllRingsCount() << endl;
	Ring* ring1 = new Ring(4.1, 6.2, 4, 5);
	cout << "Area: " << ring1->GetArea() << endl;
	cout << "Rings Count:" << Ring::GetAllRingsCount() << endl;
	Ring* ring2;
	try
	{
		ring2 = new Ring(4.1, -6.2, 4, 5);
	}
	catch (exception& except)
	{
		cout << except.what() << endl;
	}


}
void DemoRectangleWithPointClass()
{
	Rectangle* rectangles[COUNT];
	rectangles[0] = new Rectangle(0.0, 0.0, 8.1, 25.23);
	rectangles[1] = new Rectangle(1.0, 21.0, 81.0, 223.8);
	rectangles[2] = new Rectangle(2.0, 45.0, 25.45, 4.3);
	rectangles[3] = new Rectangle(3.0, 35.0, 99.2, 3.2);
	rectangles[4] = new Rectangle(4.0, 100.0, 853.205, 70.23);

	for (int i = 0; i < COUNT; i++)
	{
		cout << "X = " << rectangles[i]->GetCenterPoint()->GetX()
			<< "\tY = " << rectangles[i]->GetCenterPoint()->GetY()
			<< "\tLength = " << rectangles[i]->GetHeight()
			<< "\tWidth = " << rectangles[i]->GetWidth() << endl;
	}

	double xCenter = 0.0;
	double yCenter = 0.0;
	for (int i = 0; i < COUNT; i++)
	{
		xCenter += rectangles[i]->GetCenterPoint()->GetX();
		yCenter += rectangles[i]->GetCenterPoint()->GetY();
	}

	xCenter /= COUNT;
	yCenter /= COUNT;
	cout << "Xcenter = " << xCenter << "\tYcenter = " << yCenter << endl;

	for (int i = 0; i < COUNT; i++)
	{
		delete rectangles[i];
	}
}

//void DemoFlightWithTimeClass()
//{
//	Flight* flights[COUNT];
//	Time* departureTime1 = new Time(2020, 12, 30, 12, 40);
//	Time* purposeTime1 = new Time(2021, 1, 1, 16, 30);
//	string flightNumber = "A201";
//	string from = "Moscow";
//	string purpose = "Tomsk";
//	flights[0] = new Flight(flightNumber, from, purpose, departureTime1,
//		purposeTime1);
//
//	flightNumber = "A323";
//	from = "Tomsk";
//	purpose = "Moscow";
//	Time* departureTime2 = new Time(2020, 1, 23, 12, 0);
//	Time* purposeTime2 = new Time(2020, 1, 23, 16, 0);
//	flights[1] = new Flight(flightNumber, from, purpose, departureTime2,
//		purposeTime2);
//
//	flightNumber = "S588";
//	from = "Kemerovo";
//	purpose = "Moscow";
//	Time* departureTime3 = new Time(2020, 3, 2, 9, 30);
//	Time* purposeTime3 = new Time(2020, 3, 2, 12, 30);
//	flights[2] = new Flight(flightNumber, from, purpose, departureTime3,
//		purposeTime3);
//
//	flightNumber = "G023";
//	from = "Moscow";
//	purpose = "Kemerovo";
//	Time* departureTime4 = new Time(2020, 3, 2, 9, 30);
//	Time* purposeTime4 = new Time(2020, 3, 2, 12, 30);
//	flights[3] = new Flight(flightNumber, from, purpose, departureTime4,
//		purposeTime4);
//
//	flightNumber = "MA404";
//	from = "Kemerovo";
//	purpose = "Tomsk";
//	Time* departureTime5 = new Time(2020, 6, 12, 3, 0);
//	Time* purposeTime5 = new Time(2020, 6, 12, 4, 0);
//	flights[4] = new Flight(flightNumber, from, purpose, departureTime5,
//		purposeTime5);
//
//	for (int i = 0; i < COUNT; i++)
//	{
//		cout << flights[i]->GetFlightNumber() << "\t" << flights[i]->GetFrom()
//			<< '-' << flights[i]->GetPurpose() << "\t Departure "
//			<< flights[i]->GetDepartureTime()->GetMonth() << '.'
//			<< flights[i]->GetDepartureTime()->GetDay() << '\t'
//			<< flights[i]->GetDepartureTime()->GetHour() << ':'
//			<< flights[i]->GetDepartureTime()->GetMinute()
//			<< "\tArrival " << flights[i]->GetPurposeTime()->GetMonth()
//			<< '.' << flights[i]->GetPurposeTime()->GetDay()
//			<< '\t' << flights[i]->GetPurposeTime()->GetHour() << ':'
//			<< flights[i]->GetPurposeTime()->GetMinute() << endl;
//	}
//
//	int timeDifference = flights[0]->GetFlightTimeMinutes();
//	int minutesInHour = 60;
//	cout << flights[0]->GetFlightNumber() << "\t" << flights[0]->GetFrom()
//		<< '-' << flights[0]->GetPurpose() << "\tFlight time: "
//		<< timeDifference / minutesInHour << "h "
//		<< timeDifference % minutesInHour << "min" << endl;
//
//	delete departureTime1;
//	delete departureTime2;
//	delete departureTime3;
//	delete departureTime4;
//	delete departureTime5;
//
//	delete purposeTime1;
//	delete purposeTime2;
//	delete purposeTime3;
//	delete purposeTime4;
//	delete purposeTime5;
//	for (int i = 0; i < COUNT; i++)
//	{
//		delete flights[i];
//	}
//}

void DemoBandClass()
{
	const int songCount = 4;
	const int albumsCount = 3;

	Song** songs1 = new Song * [songCount];
	string nameSong1 = "first";
	string nameSong2 = "second";
	string nameSong3 = "third";
	string nameSong4 = "fourth";
	songs1[0] = new Song(nameSong1, 1, Rock);
	songs1[1] = new Song(nameSong2, 2, Pop);
	songs1[2] = new Song(nameSong3, 3, HipHop);
	songs1[3] = new Song(nameSong4, 4, Jazz);

	Song** songs2 = new Song * [songCount];
	nameSong1 = "One";
	nameSong2 = "Two";
	nameSong3 = "Three";
	nameSong4 = "Four";
	songs2[0] = new Song(nameSong1, 1, Jazz);
	songs2[1] = new Song(nameSong2, 2, Pop);
	songs2[2] = new Song(nameSong3, 3, HipHop);
	songs2[3] = new Song(nameSong4, 4, Jazz);

	Song** songs3 = new Song * [songCount];
	nameSong1 = "Song 1";
	nameSong2 = "Song 2";
	nameSong3 = "Song 3";
	nameSong4 = "Song 4";
	songs3[0] = new Song(nameSong1, 1, HipHop);
	songs3[1] = new Song(nameSong2, 2, HipHop);
	songs3[2] = new Song(nameSong3, 3, HipHop);
	songs3[3] = new Song(nameSong4, 4, HipHop);

	Album** albums = new Album * [albumsCount];
	string nameAlbum1 = "First Album";
	string nameAlbum2 = "Second Album";
	string nameAlbum3 = "Third Album";
	albums[0] = new Album(nameAlbum1, 1990, songCount, songs1);
	albums[1] = new Album(nameAlbum2, 1999, songCount, songs2);
	albums[2] = new Album(nameAlbum3, 2010, songCount, songs3);

	string nameBand = "Band Name";
	string description = "Something";
	Band* band = new Band(nameBand, description, albumsCount, albums);

	string foundSongName = "Song 1";
	Song* foundSong = band->FindSong(foundSongName);
	if (foundSong != nullptr)
	{
		cout << foundSong->WriteSong() << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}

	Album* foundAlbum = band->FindAlbum(songs2[2]);
	if (foundAlbum != nullptr)
	{
		cout << "Album title: " << foundAlbum->GetAlbumTitle() << '\t'
			<< "Issue Year: " << foundAlbum->GetIssueYear()
			<< '\t' << "Songs Count: " << foundAlbum->GetSongsCount()
			<< endl << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}

	int allSongsCount;
	Song** allSongs = band->GetAllSongs(allSongsCount);
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << allSongs[i]->WriteSong() << endl;
	}
	delete[] allSongs;
	cout << endl;

	int allSongsCountGenre;
	Song** allSongGenre = band->GetAllGenreSongs(HipHop, allSongsCountGenre);
	for (int i = 0; i < allSongsCountGenre; i++)
	{
		cout << allSongGenre[i]->WriteSong() << endl;
	}

	for (int i = 0; i < songCount; i++)
	{
		delete songs1[i];
		delete songs2[i];
		delete songs3[i];
	}

	for (int i = 0; i < albumsCount; i++)
	{
		delete albums[i];
	}

	delete[] allSongGenre;
	delete[] albums;
}

//void DemoDrawingClass()
//{
//	Line* lines[COUNT];
//	lines[0] = new Line(1.1, 1.5, 1.3, 2.5, Solid);
//	lines[1] = new Line(1.2, 1.6, 1.4, 2.6, Solid);
//	lines[2] = new Line(1.3, 1.7, 1.5, 2.7, Solid);
//	lines[3] = new Line(1.4, 1.8, 1.6, 2.8, Solid);
//	lines[4] = new Line(1.5, 1.9, 1.7, 2.9, Solid);
//
//	for (int i = 0; i < COUNT; i++)
//	{
//		cout << "startX = " << lines[i]->GetStartPoint()->GetX()
//			<< "\tstartY = " << lines[i]->GetStartPoint()->GetY()
//			<< "\tstopX = " << lines[i]->GetStopPoint()->GetX()
//			<< "\tstopY = " << lines[i]->GetStopPoint()->GetY()
//
//			<< "\tStyle: " << lines[i]->GetLineStyle() << endl;
//	}
//
//	Drawing* drawing = new Drawing(*lines, COUNT);
//	cout << "Lines count = " << drawing->GetLinesCount() << "\tLine style = " <<
//		drawing->GetLines()->GetLineStyle()
//		<< "\tStartX = " << drawing->GetLines()->GetStartPoint()->GetX() << "\tStartY = "
//		<< drawing->GetLines()->GetStartPoint()->GetY() << "\tStopX = "
//		<< drawing->GetLines()->GetStopPoint()->GetX() << "\tStopY ="
//		<< drawing->GetLines()->GetStopPoint()->GetY();
//
//}


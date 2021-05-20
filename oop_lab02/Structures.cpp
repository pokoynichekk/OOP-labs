#include <iostream>
#include "Structures.h"
#include "Rectangle.h"
#include "Movie.h"
#include "Flight.h"
#include "Time.h"
#include "Enumeration.h"

void DemoRectangle()
{
	Rectangle* rectangle = new Rectangle;
	rectangle->height = 10;
	rectangle->width = 20;
	rectangle->color = "Red";
	Rectangle* rectangle2 = new Rectangle;
	std::cin >> rectangle2->width;
	std::cin >> rectangle2->height;
	std::cin >> rectangle2->color;
	std::cout << "\n" << rectangle2->color << " rectangle "
		<< rectangle2->width << "x" << rectangle2->height;
	double *a = &rectangle->height;
	double *b = &rectangle->height;
	std::cout << a << "\n" << b;
}

void DemoMovie()
{
	Movie* movie = new Movie;
	movie->name = "Pulp Fiction";
	movie->genre = action;
	movie->timeMinutes = 154;
	movie->year = 1994;
	movie->rating = 8.6;
	Movie* movie2 = new Movie;
	std::cin >> movie2->name;
	movie2->genre = ReadGenre();
	std::cin >> movie2->timeMinutes;
	std::cin >> movie2->year;
	std::cin >> movie2->rating;
	std::cout << movie2->genre << " " << movie2->name << "(" << movie2->year << ") "
		<< movie2->timeMinutes << movie2->rating;
	double* a = &movie->rating;
	double* b = &movie->rating;
	std::cout << a << "\n" << b << std::endl;
	Movie* movie3 = MakeMovie("a", comedy, 1994, 5.6, 156);

	int count = 2;
	Movie* movieArray = new Movie[count];
	movieArray[0] = *MakeMovie("a", comedy, 1994, 5.6, 156);
	movieArray[1] = *MakeMovie("a", comedy, 1994, 5.8, 156);
	WriteMovie(movieArray[0]);
	WriteMovie(movieArray[1]);
	WriteMovie(*FindMostRatingMovieByGenre(movieArray, count, comedy));

}

void DemoFlight()
{
	Flight* flight = new Flight;
	flight->departure = "Tomsk";
	flight->destination = "Moscow";
	flight->flightTimeMinutes = 244;
	Flight* flight2 = new Flight;
	std::cin >> flight2->departure;
	std::cin >> flight2->destination;
	std::cin >> flight2->flightTimeMinutes;
	std::cout << "Departure point:" << flight2->departure << " Destination point: "
		<< flight2->destination << " Flight time:" << flight2->flightTimeMinutes;
	int* a = &flight->flightTimeMinutes;
	int* b = &flight->flightTimeMinutes;
	std::cout << a << "\n" << b;
}

void DemoTime()
{
	Time* time = new Time;
	time->hours = 2;
	time->minutes = 25;
	time->seconds = 42;
	Time* time2 = new Time;
	std::cin >> time2->hours;
	std::cin >> time2->minutes;
	std::cin >> time2->seconds;
	std::cout << time2->hours << ":" << time2->minutes << ":"
		<< time2->seconds;
	int* a = &time->hours;
	int* b = &time->hours;
	std::cout << a << "\n" << b;
}

void WriteRectangle(Rectangle& rectangle)
{
	std::cout << "Rectangle size: " << rectangle.width << "x" << rectangle.height << std::endl;
}

void ReadRectangle(Rectangle& rectangle)
{
	std::cout << "Width: ";
	std::cin >> rectangle.width;
	std::cout << "Height: ";
	std::cin >> rectangle.height;
}

void DemoReadAndWriteRectangles()
{
	Rectangle rectangle[5];
	for (int i = 0; i < 5; i++)
	{
		ReadRectangle(rectangle[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		WriteRectangle(rectangle[i]);
	}
}

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	double swap;
	swap = rectangle1.width;
	rectangle1.width = rectangle2.width;
	rectangle2.width = swap;

	swap = rectangle1.height;
	rectangle1.height = rectangle2.height;
	rectangle2.height = swap;
}

void DemoRectangleExchange()
{
	Rectangle rectangle1;
	Rectangle rectangle2;
	ReadRectangle(rectangle1);
	ReadRectangle(rectangle2);
	WriteRectangle(rectangle1);
	WriteRectangle(rectangle2);
	Exchange(rectangle1, rectangle2);
	WriteRectangle(rectangle1);
	WriteRectangle(rectangle2);
}

void FindRectangle(Rectangle* rectangles, int count)
{
	double max = 0;
	int maxid;
	for (int i = 0; i < count; i++)
	{
		if(rectangles[i].width > max)
		{ 
			max = rectangles[i].width;
			maxid = i;
		}
	}
	std::cout << "Rectangle with max width: " << rectangles[maxid].width << 'x' << rectangles[maxid].height;
}

void FindMaxRectangle(Rectangle* rectangles, int count)
{
	double max = 0;
	int maxid;
	for (int i = 0; i < count; i++)
	{
		if ((rectangles[i].width * rectangles[i].height) > max)
		{
			max = rectangles[i].width * rectangles[i].height;
			maxid = i;
		}
	}
	std::cout << "Rectangle with max square: " << rectangles[maxid].width << 'x' << rectangles[maxid].height;
}

void DemoCircle()
{
	Circle* circle1 = MakeCircle("Red", 7.5, 5.0, 7.0);
	Circle* circle2 = MakeCircle("Green", 12.75, 2.0, -12.0);
	Circle* circle3 = MakeCircle("Blue", 1.45, -10, 10);

	Circle* copiedCircle1 = CopyCircle(*circle1);
	Circle* copiedCircle2 = CopyCircle(*circle2);
	Circle* copiedCircle3 = CopyCircle(*circle3);

}

Circle* MakeCircle(std::string color, double radius, double x, double y)
{
	Circle* circle = new Circle;
	circle->color = color;
	circle->radius = radius;
	circle->x = x;
	circle->y = y;
	return circle;
}

Circle* CopyCircle(Circle& circle)
{
	Circle* copiedCircle = new Circle;
	copiedCircle->color = circle.color;
	copiedCircle->radius = circle.radius;
	copiedCircle->x = circle.x;
	copiedCircle->y = circle.y;
	return copiedCircle;
}

Movie* MakeMovie(std::string name, genre genre, int year, double rating, int timeMinutes)
{
	Movie* movie = new Movie;
	movie->genre = genre;
	movie->name = name;
	movie->year = year;
	movie->timeMinutes = timeMinutes;
	movie->rating = rating;
	return movie;
}

void DemoMovieWithGenre()
{
	int count = 4;
	Movie* movieArray = new Movie[count];
	for (int i = 0; i < count; i++)
	{
		ReadMovie(movieArray[i]);
	}
	for (int i = 0; i < count; i++)
	{
		WriteMovie(movieArray[i]);
	}

	std::cout << "Find Genre: ";
	genre findGenre = ReadGenre();
	std::cout << "\nMost Rating FIlm: \n";
	WriteMovie(*FindMostRatingMovieByGenre(movieArray, count, findGenre));

}

void ReadMovie(Movie& movie)
{
	std::cout << "Name: ";
	std::cin >> movie.name;
	std::cout << "Genre: ";
	movie.genre = ReadGenre();
	std::cout << "Time: ";
	std::cin >> movie.timeMinutes;
	std::cout << "Year: ";
	std::cin >> movie.year;
	std::cout << "Rating:";
	std::cin >> movie.rating;
	std::cout << std::endl;
}

void WriteMovie(Movie& movie)
{
	std::cout << "Name: ";
	std::cout << movie.name << std::endl;
	std::cout << "Genre: ";
	WriteGenre(movie.genre);
	std::cout << "Time: ";
	std::cout << movie.timeMinutes << std::endl;
	std::cout << "Year: ";
	std::cout << movie.year << std::endl;
	std::cout << "Rating:";
	std::cout << movie.rating << std::endl;
	std::cout << std::endl;
}

Movie* FindMostRatingMovieByGenre(Movie* movieArray, int count, genre findGenre)
{
	int maxrating = 0;
	int maxid;
	for (int i = 0; i < count; i++)
	{
		if ((movieArray[i].genre == findGenre) && (movieArray[i].rating > maxrating))
		{
			maxrating = movieArray[i].rating;
			maxid = i;
		}
		if (maxrating == 0)
		{
			return nullptr;
		}
	}
	return &movieArray[maxid];
}
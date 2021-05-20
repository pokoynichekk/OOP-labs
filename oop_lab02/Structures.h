#pragma once
#include <string>
#include "Circle.h"
#include "Rectangle.h"
#include "Movie.h"
#include "Enumeration.h"

void DemoRectangle();

void DemoMovie();

void DemoFlight();

void DemoTime();

void WriteRectangle(Rectangle& rectangle);

void ReadRectangle(Rectangle& rectangle);

void DemoReadAndWriteRectangles();

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2);

void DemoRectangle();

void DemoRectangleExchange();

void FindMaxRectangle(Rectangle* rectangles, int count);

void FindRectangle(Rectangle* rectangles, int count);

Circle* MakeCircle(std::string color, double radius, double x, double y);

void DemoCircle();

Circle* CopyCircle(Circle& circle);

Movie* MakeMovie(std::string name, genre genre, int year, double rating, int timeMinutes);

void DemoMovieWithGenre();

void ReadMovie(Movie& movie);

void WriteMovie(Movie& movie);

Movie* FindMostRatingMovieByGenre(Movie* movieArray, int count, genre findGenre);
#include <iostream>
#include "Enumeration.h"


void WriteColor(color color)
{
	switch (color)
	{
		case red:
		{
			std::cout << "Red color";
			break;
		}
		case orange:
		{
			std::cout << "Orange color";
			break;
		}
		case yellow:
		{
			std::cout << "Yellow color";
			break;
		}
		default:
			break;
	}
}

color ReadColor()
{
	int i;
	std::cin >> i;

	switch (i)
	{
	case red:
	{
		return red;
		break;
	}
	case orange:
	{
		return orange;
		break;
	}
	case yellow:
	{
		return yellow;
		break;
	}
	default:
		break;
	}
}

genre ReadGenre()
{
	int i;
	std::cin >> i;

	switch (i)
	{
	case comedy:
	{
		return comedy;
		break;
	}
	case drama:
	{
		return drama;
		break;
	}
	case action:
	{
		return action;
		break;
	}
	default:
	{
		break;
	}
	}
}

void WriteGenre(genre genre)
{
	switch (genre)
	{
	case comedy:
	{
		std::cout << "comedy" << std::endl;
		break;
	}
	case drama:
	{
		std::cout << "drama" << std::endl;
		break;
	}
	case thriller:
	{
		std::cout << "thriller" << std::endl;
		break;
	}
	default:
		break;
	}
}
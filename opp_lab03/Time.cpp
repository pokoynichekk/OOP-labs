#include "Time.h"
#include <exception>

using namespace std;

Time::Time(int year, int month, int day, int hour, int minute)
{
	this->SetYear(year);
	this->SetMonth(month);
	this->SetDay(day);
	this->SetHour(hour);
	this->SetMinute(minute);
}

Time::~Time()
{

}

void Time::SetYear(int year)
{
	if (year < 0)
	{
		throw std::exception("Year cannot be negative");
	}
	this->_year = year;
}

void Time::SetMonth(int month)
{
	if (month <= 0 || month > 12)
	{
		throw std::exception("Incorrect month");
	}
	this->_month = month;
}

void Time::SetDay(int day)
{
	if (day <= 0 || day > 30)
	{
		throw std::exception("Incorrect day");
	}
	this->_day = day;
}

void Time::SetHour(int hour)
{
	if (hour <= 0 || hour > 24)
	{
		throw std::exception("Incorrect hour");
	}
	this->_hour = hour;
}

void Time::SetMinute(int minute)
{
	if (minute < 0 || minute > 60)
	{
		throw std::exception("Incorrect minute");
	}
	this->_minute = minute;
}

int Time::GetYear()
{
	return this->_year;
}

int Time::GetMonth()
{
	return this->_month;
}

int Time::GetDay()
{
	return this->_day;
}

int Time::GetHour()
{
	return this->_hour;
}

int Time::GetMinute()
{
	return this->_minute;
}
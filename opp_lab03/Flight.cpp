#include "Flight.h"
#include <exception>

using namespace std;

Flight::Flight(string& flightNumber, string& from,
	string& purpose, Time* departureTime, Time* purposeTime)
{
	this->SetFlightNumber(flightNumber);
	this->SetFrom(from);
	this->SetPurpose(purpose);
	this->SetDepartureTime(departureTime);
	this->SetPurposeTime(purposeTime);
}

void Flight::SetFlightNumber(string& flightNumber)
{
	this->_flightNumber = flightNumber;
}

void Flight::SetFrom(string& from)
{
	this->_from = from;
}

void Flight::SetPurpose(string& purpose)
{
	this->_purpose = purpose;
}

void Flight::SetDepartureTime(Time* departureTime)
{
	this->_departureTime = departureTime;
}

void Flight::SetPurposeTime(Time* purposeTime)
{
	int minutesInHour = 60;
	if (this->_departureTime->GetYear() > purposeTime->GetYear())
	{
		throw exception("Error");
	}
	else if (this->_departureTime->GetYear() == purposeTime->GetYear())
	{
		if (this->_departureTime->GetMonth() > purposeTime->GetMonth())
		{
			throw exception("Error");
		}
		else if (this->_departureTime->GetMonth() ==
			purposeTime->GetMonth())
		{
			if (this->_departureTime->GetDay() > purposeTime->GetDay())
			{
				throw exception("Error");
			}
			else if (this->_departureTime->GetDay() >
				purposeTime->GetDay())
			{
				if (this->_departureTime->GetHour() * minutesInHour
					+ this->_departureTime->GetMinute() >=
					purposeTime->GetHour() * minutesInHour +
					purposeTime->GetMinute())
				{
					throw exception("Error");
				}
			}
		}
	}
	this->_purposeTime = purposeTime;
}

string Flight::GetFlightNumber()
{
	return this->_flightNumber;
}

string Flight::GetFrom()
{
	return this->_from;
}

string Flight::GetPurpose()
{
	return this->_purpose;
}

Time* Flight::GetDepartureTime()
{
	return this->_departureTime;
}

Time* Flight::GetPurposeTime()
{
	return this->_purposeTime;
}

int Flight::GetFlightTimeMinutes()
{
	Time* departureTime = this->GetDepartureTime();
	Time* purposeTime = this->GetPurposeTime();
	int timeDifferenceMinutes = purposeTime->GetMinute()
		- departureTime->GetMinute();
	int timeDifferenceHours = purposeTime->GetHour()
		- departureTime->GetHour();
	int minutesInHour = 60;
	if (timeDifferenceMinutes < 0)
	{
		timeDifferenceMinutes += minutesInHour;
		timeDifferenceHours--;
	}
	return timeDifferenceHours * minutesInHour + timeDifferenceMinutes;
}
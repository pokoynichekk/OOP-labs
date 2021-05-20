#pragma once
#include <string>
#include "Time.h"

class Flight
{
private:
	std::string _flightNumber;
	std::string _from;
	std::string _purpose;
	Time* _departureTime;
	Time* _purposeTime;

public:
	void SetFlightNumber(std::string& flightNumber);
	void SetFrom(std::string& from);
	void SetPurpose(std::string& purpose);
	void SetDepartureTime(Time* departureTime);
	void SetPurposeTime(Time* purposeTime);

	std::string GetFlightNumber();
	std::string GetFrom();
	std::string GetPurpose();
	Time* GetDepartureTime();
	Time* GetPurposeTime();


	int GetFlightTimeMinutes();

	Flight(std::string& flightNumber, std::string& from,
		std::string& purpose, Time* departureTime,
		Time* purposeTime);
	~Flight()
	{

	}
};
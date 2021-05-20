#include <iostream>
#include "User.h"

User* MakeUser(std::string login, std::string password);
bool IsCorrectPassword(User& user, std::string inputPassword);


int main()
{
	User* user = new User[3];
	user[0] = *MakeUser("admin", "123");
	user[1] = *MakeUser("moderator", "321");
	user[2] = *MakeUser("user", "qwerty");

	std::string inputPassword;
	std::cout << "Enter Password: ";
	std::cin >> inputPassword;

	if (IsCorrectPassword(user[1], inputPassword))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}


User* MakeUser(std::string login, std::string password)
{
	User* newUser = new User;
	newUser->Login = login;
	newUser->Password = password;
	return newUser;
}

bool IsCorrectPassword(User& user, std::string inputPassword)
{
	return (inputPassword == user.Password) ? true : false;
}
#include <iostream>
#include "GeometricProgram.h"

int main()
{
    int menuOption;
    std::cout << "MENU:" << std::endl;
    std::cout << "1 - Ring\n";
    std::cout << "2 - Collision\n";
    std::cout << "Any key to exit.\n\n";

    while (true)
    {
        std::cin >> menuOption;
        switch (menuOption)
        {
        case 1:
        {
            DemoScale();
            break;
        }
        case 2:
        {
            DemoCollision();
            break;
        }
        default:
        {
            return 0;
        }
        }
    }
}

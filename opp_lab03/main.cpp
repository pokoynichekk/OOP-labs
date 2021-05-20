#include <iostream>
#include "Demo.h"

int main()
{
    int menuOption;
    std::cout << "MENU:" << std::endl;
    std::cout << "3 - Drawing Class\n";
    std::cout << "Any key for exit.\n";
    while (true)
    {
        std::cin >> menuOption;
        switch (menuOption)
        {
        case 1:
            {
            DemoRectangleWithCenter();
            break;
            }
        case 2:
            {
            DemoFlightWithTimeClass();
            break;
            }
        case 3:
            {
            DemoDrawingClass();
            break;
            }
        default:
            {
            return 0;
            }
        }
    }
}


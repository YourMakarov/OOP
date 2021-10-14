#include <iostream>
#include "pentagon.h"
#include "hexagon.h"
#include "octagon.h"
#include "point.h"

using namespace std;

int main()
{
    Point point1;
    std::cin >> point1;
    std::cout << point1;

    Pentagon a(std::cin);
    a.Print();
    std::cout << "square: " << a.Area() << std::endl;

    Octagon b(std::cin);
    b.Print();
    std::cout << "square: " << b.Area() << std::endl;

    Hexagon c(std::cin);
    c.Print();
    std::cout << "square: " << c.Area() << std::endl;
    
    return 0;
}

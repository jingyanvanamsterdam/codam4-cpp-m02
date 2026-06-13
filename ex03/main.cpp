#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	{    
		Point a(0.0f, 0.0f);
		Point b(10.0f, 0.0f);
		Point c(5.0f, 10.0f);

		Point inside(5.0f, 5.0f);
		Point outside(10.0f, 10.0f);
		Point onEdge(5.0f, 0.0f);
		Point onVertex(0.0f, 0.0f);

		std::cout << "Inside:   "
				<< bsp(a, b, c, inside)
				<< std::endl;

		std::cout << "Outside:  "
				<< bsp(a, b, c, outside)
				<< std::endl;

		std::cout << "On edge:  "
				<< bsp(a, b, c, onEdge)
				<< std::endl;

		std::cout << "On vertex:"
				<< bsp(a, b, c, onVertex)
				<< std::endl;
	}
	{
		Point d(-5.0f, -5.0f);
		Point e(5.0f, -5.0f);
		Point f(0.0f, 5.0f);

		Point p1(0.0f, 0.0f);
		Point p2(10.0f, 0.0f);

		std::cout << "\nNegative coordinates test\n";

		std::cout << "Inside:  "
				<< bsp(d, e, f, p1)
				<< std::endl;

		std::cout << "Outside: "
				<< bsp(d, e, f, p2)
				<< std::endl;
	}
	{
		std::cout << "\nRight triangle test\n";
		Point a(0.0f, 0.0f);
		Point b(10.0f, 0.0f);
		Point c(0.0f, 10.0f);

		Point p1(1.0f, 1.0f);   // inside
		Point p2(8.0f, 8.0f);   // outside

		std::cout << "Inside:  " << bsp(a, b, c, p1) << std::endl;
		std::cout << "Outside:  " << bsp(a, b, c, p2) << std::endl;
	}
}
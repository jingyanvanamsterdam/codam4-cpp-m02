#include "Point.hpp"
#include "Fixed.hpp"

static int	cross(Point const a, Point const b, Point const p)
{
	float first = b.getX().toFloat() - a.getX().toFloat();
	float second = p.getY().toFloat() - a.getY().toFloat();
	float third = p.getX().toFloat() - a.getX().toFloat();
	float fourth = b.getY().toFloat() - a.getY().toFloat();

	float res = first * second - third * fourth;
	if (res > 0)
		return (1);
	else if (res == 0)
		return (0);
	else
		return (-1);
}
/**
 * cross product
 * A(x1, y1)
 * B(x2, y2)
 * P(x, y)
 * (B - A) * (P - A)
 * B->A = (x2 - x1, y2 - y1);
 * P->A = (x - x1, y - y1);
 * 
 * crossproduct = AB * AP = (x2 - x1) * (y - y1) - (x - x1) * (y2 - y1);
 */
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	int res1 = cross(a, b, point);
	int res2 = cross(b, c, point);
	int res3 = cross(c, a, point);

	if ((res1 > 0 && res2 > 0 && res3 > 0) ||
		(res1 < 0 && res2 < 0 && res3 < 0))
		return (true);
	else
		return (false);
}
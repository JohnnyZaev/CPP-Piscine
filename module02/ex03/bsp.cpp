//
// Created by Johnny Zaev on 17.05.2022.
//

#include "Point.hpp"

static float CalcTriArea(Point const v1, Point const v2, Point const v3)
{
	float det = 0.0f;
	det = ((v1.getX() - v3.getX()) * (v2.getY() - v3.getY())) - ((v2.getX() - v3.getX()) * (v1.getY() - v3.getY()));
	if (det < 0)
		det *= -1;
	return (det / 2.0f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float TotalArea = CalcTriArea(a, b, c);
	float Area1 = CalcTriArea(point, b, c);
	float Area2 = CalcTriArea(point, a, c);
	float Area3 = CalcTriArea(point, a, b);

	if (!Area1 || !Area2 || !Area3)
		return false;
	std::cout << Area1 << " " << Area2 << " " << Area3 << " " << TotalArea << " " << (Area1 + Area2 + Area3) <<  std::endl;
	if((Area1 + Area2 + Area3) > TotalArea)
		return false;
	else
		return true;
}
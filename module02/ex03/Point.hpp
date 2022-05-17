//
// Created by Johnny Zaev on 17.05.2022.
//

#ifndef CPP_PISCINE_POINT_HPP
#define CPP_PISCINE_POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	Fixed _x;
	Fixed _y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &b);
	~Point();
	Point& operator= (const Point& other);
	float getX() const ;
	float getY() const ;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //CPP_PISCINE_POINT_HPP

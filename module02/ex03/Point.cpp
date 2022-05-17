//
// Created by Johnny Zaev on 17.05.2022.
//

#include "Point.hpp"

Point::Point() {
}

Point::~Point() {

}

Point::Point(const float x, const float y) {
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point &Point::operator=(const Point &other) {
	this->_x = other._x;
	this->_y = other._y;
	return (*this);
}

Point::Point(const Point &b) {
	*this = b;
}

float Point::getX() const {
	return this->_x.toFloat();
}

float Point::getY() const {
	return this->_y.toFloat();
}
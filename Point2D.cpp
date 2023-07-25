#include <iostream>
#include "Point2D.h"

Point2D::Point2D() : mX{}, mY{}
{

}

Point2D::Point2D(int x, int y) : mX{x}, mY{y}
{
}

void Point2D::Print()
{
	std::cout << "(" << mX << "," << mY << ")" << std::endl;
}

Point2D operator+(const Point2D& arg1, const Point2D& arg2)
{
	Point2D result;
	result.mX = arg1.mX + arg2.mX;
	result.mY = arg1.mY + arg2.mY;

	return result;
}

/*
#include <iostream>
#include <cmath>
#include "Point2D.h"

void Point2D::set(int x, int y)
{
	mX = x;
	mY = y;
}

double Point2D::Distance() const
{
	return sqrt(mX * mX + mY * mY);
}

void Point2D::Print() const
{
	std::cout << "(" << mX << "," << mY << ")" << std::endl;
}
*/



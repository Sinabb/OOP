#pragma once
#pragma once

class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D() : Point2D(0,0)
	{
		// 작업 1
		// 작업 2
		std::cout << "기본 생성자" << std::endl;
	}

	~Point2D() // 위 아래 기본생성자
	{
		// 작업 1
		// 작업 2
		std::cout << "소멸자" << std::endl;
		
	}

	Point2D(int x, int y) : mX{ x }, mY{ y }// 기본 생성자와 같은 목적, 다른 방식, 이게 더 편함
	{
		std::cout << "x,y 기본 생성자" << std::endl;
	}


	void set(int x, int y);
	double Distance() const;
	void Print() const;
};

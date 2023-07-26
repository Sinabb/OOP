#pragma once
//이항 연산자
//전역 친구 함수
class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D();
	Point2D(int x, int y);
	void Print();

	//전역 친구 함수
	friend Point2D operator + (const Point2D& arg1, const Point2D& arg2);

	//멤버 함수
	Point2D operator - (const Point2D& op)
	{
		return Point2D(
			mX - op.mX,
			mY - op.mY
		);
	}


	//단항 연산자
	//전역 친구 함수
	friend const Point2D& operator++(Point2D& arg1)
	{
		arg1.mX++;
		arg1.mY++;
		return arg1;
	}
	//멤버 함수:전위 연산자
	Point2D operator -- ()
	{
		mX--;
		mY--;
		return *this;
	}

	//멤버 함수: 후위 연산자
	friend const Point2D& operator++(Point2D& arg1,int v)
	{

		//대입 후 
		Point2D temp(arg1.mX, arg1.mY);

		//증가
		arg1.mX++;
		arg1.mY++;
		return temp;
	}

	//후위 연산자 :멤버 함수 --
	Point2D operator -- (int t)
	{
		Point2D temp(mX,mY);
		mX--;
		mY--;
		return *this;
	}
	// []-member function
	int& operator[](int index)
	{
		switch (index)
		{
		case 0:
			return mX;
			break;
		case 1:
			return mY;
			break;

		default:
			std::cerr << "Index must be 0 or 1" << std::endl;
			break;
		}
		return mX;
	}

	operator float()
	{
		return sqrt(mX * mX + mY * mY);
	}

	void operator()()
	{
		mX = mY = 0;
	}

	void operator()(int x, int y)
	{
		mX = x;
		mY = y;
	}

	//스티림 연산자
	friend std::ostream& operator<<(std::ostream& os, Point2D pt)
	{
		os << "(" << pt.mX << "," << pt.mY << ")";
			return os;
	}

};



Point2D operator + (const Point2D& arg1, const Point2D& arg2);

/*
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
*/

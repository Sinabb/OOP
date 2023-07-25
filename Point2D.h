#pragma once
//���� ������
//���� ģ�� �Լ�
class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D();
	Point2D(int x, int y);
	void Print();

	//���� ģ�� �Լ�
	friend Point2D operator + (const Point2D& arg1, const Point2D& arg2);

	//��� �Լ�
	Point2D operator - (const Point2D& op)
	{
		return Point2D(
			mX - op.mX,
			mY - op.mY
		);
	}


	//���� ������
	//���� ģ�� �Լ�
	friend const Point2D& operator++(Point2D& arg1)
	{
		arg1.mX++;
		arg1.mY++;
		return arg1;
	}
	//��� �Լ�:���� ������
	Point2D operator -- ()
	{
		mX--;
		mY--;
		return *this;
	}

	//��� �Լ�: ���� ������
	friend const Point2D& operator++(Point2D& arg1,int v)
	{

		//���� �� 
		Point2D temp(arg1.mX, arg1.mY);

		//����
		arg1.mX++;
		arg1.mY++;
		return temp;
	}

	//���� ������ :��� �Լ� --
	Point2D operator -- (int t)
	{
		Point2D temp(mX,mY);
		mX--;
		mY--;
		return *this;
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
		// �۾� 1
		// �۾� 2
		std::cout << "�⺻ ������" << std::endl;
	}

	~Point2D() // �� �Ʒ� �⺻������
	{
		// �۾� 1
		// �۾� 2
		std::cout << "�Ҹ���" << std::endl;
		
	}

	Point2D(int x, int y) : mX{ x }, mY{ y }// �⺻ �����ڿ� ���� ����, �ٸ� ���, �̰� �� ����
	{
		std::cout << "x,y �⺻ ������" << std::endl;
	}


	void set(int x, int y);
	double Distance() const;
	void Print() const;
};
*/

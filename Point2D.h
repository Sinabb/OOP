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

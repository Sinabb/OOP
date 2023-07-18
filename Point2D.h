#pragma once
#pragma once

class point2D
{
private:
	int mX;
	int mY;

public:
	void set(int x, int y);
	double Distance() const;
	void Print() const;
};

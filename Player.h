#pragma once

class Player
{
public:
	class Sword
	{
		int mPrice;
		int mAttack;
	};

	enum Costume
	{
		Hunter = 1,
		Summer = 2,
		Winter = 3
	};
private:
	int mHealth;
	int mAttack;
public:
	Player() {}
	~Player(){}

	void Walk();
	void Run();
	void Jump();
	int GetAttack()
	{
		if (mAttack<0)
		{
			std::cout << "Somthing Wrong!" << std::endl;
		}
		// 레벨 보정 + 장비 보정
		// 보안, 사용성도 좋아짐(계산을 일일히 안해도 됨)
		int factor = 1;
		return mAttack * factor;

	}
};


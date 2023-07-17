#include <iostream>
#include "Player.h"


int main()
{
    Player wolf;
    wolf.GetAttack();
    
    Player::Sword s1;
    Player::Costume costume = Player::Costume::Summer;
}

/*
class Galaxy
{
    //state - member variable
private:
    char ModelName[10];
public:
    int color; 
    int weight;

    // Behaviour
    void Phone()
    {
        std::cout << "따르릉" << std::endl;

    }
    void Message()
    {
        std::cout << "메세지" << std::endl;
    }
};

int main()
{
    //Instanatiate(인스턴트화)
    Galaxy myPhone;

    myPhone.color = 1;
    myPhone.Phone();

    Galaxy yourphone;
    yourphone.color = 2;
}
*/

/*
    #include <iostream>

class Computer
{
private:
    int Power;
    char Mainboard[10];
 
   
public:
    int color;
    int Price;

private:
    void PowerPrint()
    {
        std::cout << "파워는" << Power << "W(와트)" << std::endl;
    }
public:
    void PricePrint()
    {
        std::cout << "가격은" << Price << std::endl;
    }
};
*/

/*
    class Car
{
    // default access modifier : private
public:
    //state: member varaiable;
    int wheels;
    int speed;
    int weight;

    // Behaviour : member function
    void Start();
    void Drive();
    void Parking();
};
void Car::Start() // 클래스의 멤버 변수를 선언과 정의로 분류해서 만드는 방법
{
    speed = 0;
    std::cout << "Engine Start!" << std::endl;
}

int main()
{
    Car i5;

    i5.wheels = 4;
    i5.speed = 100;

    i5.Start(); // 여기서 Start 함수는 i5걸로 됨, 복사된 채로 넘어가기 때문
}
*/

/*
    class MyClass //Class는 끝나는 시점까지 클래스의 선언이라, f1와 f2를 알고있음
{
    void f1()
    {
        f2();
    }

    void f2()
    {
        f1();
    }
};
*/

/* 멤버 함수 생긴 형태
    class MyClass 
{
    void f1();
    void f2();

};
void MyClass::f1()
{

}

void MyClass::f2()
{

}
int main()
{
   
}
*/
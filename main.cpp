#include <iostream>
#include "Point2D.h"

int main()
{
    Point2D pt1{ 2,3 };
    Point2D pt2{ 3,4 };

    Point2D pt3 = pt1 + pt2;
    pt3.Print();
    Point2D pt4 = pt1 + pt2+pt3;
    pt4.Print();

    Point2D pt5 = pt2 - pt1;
    pt5.Print();

    /*
    int x{1}, y{};
    y = ++x;

    std::cout << x << "," << y << std::endl;
    */

    //++ 연산자 오버로딩
    Point2D pt6{ 1,2 }, pt7{};
    pt7 = ++pt6;

    pt6.Print();
    pt7.Print();

    pt7 = pt6++;
    pt6.Print();
    pt7.Print();

    //-- 연산자 오버로딩
    Point2D pt8{ 1,2 }, pt9{};
    pt9 = --pt8;

    pt8.Print();
    pt9.Print();

    pt9 = pt8--;

    pt8.Print();
    pt9.Print();

    //
    
    std::cout << pt9[0] << "," << pt9[1] << std::endl;
    pt9[0] = 10;
    pt9[1] = 20;
    pt9.Print();
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

/*
class Aircondtioner
{
    int mTemperature;
public:
    int GetTemperature() const // const 앞에 this가 생략되잇음, 이 함수는 멤버 변수 값을 바꿀 수 없다.
    {
        return mTemperature;
    }
};

class Calendar
{
private:
    int mMonth;
public:
    void SetMonth(std::string m)
    {
        // Dec ->12
        mMonth = 12;
    }
    std::string GetMonth() const
    {
        // 1 -jan
        // 2 -fed
        return "january";
    }
};

int main()
{
    Player wolf;
    wolf.GetAttack();

    Player::Sword s1;
    Player::Costume costume = Player::Costume::Summer;

    Aircondtioner myHouse;
    myHouse.GetTemperature();
}
*/

/*
    class MyClass
{
public:
    MyClass()
    {
        std::cout << "[생성자]" << std::endl;
    }
    ~MyClass()
    {
        std::cout << "[소멸자]" << std::endl;
    }
};

int main()
{
    std::cout << "start" << std::endl;

    MyClass c1;
    MyClass* c2 = new MyClass;
    delete c2;

    std::cout << "end" << std::endl;
}
*/

/*
    point2D p1;
    p1.set(3,3);
    p1.Print();
    std::cout<<p1.Distance()<<std::endl;
*/

/*
    class Monster
{
private:
    int mHealth{1};
    int mLevel{1};

public:
    // default constructor
     Monster()//기본 생성자
    {
        mHealth = 1;
        mLevel = 1;
  
Monster(int level = 0, int health = 0) // 생성자
{
    mLevel = level;
    mHealth = health;
}
  Monster()
  {
      mHealth = mLevel = 0;
      std::cout << "여기" << std::endl;
  }
  Monster(int level)
  {
      mLevel = level;
      mHealth = 0;

void Print()
{
    std::cout << "health:" << mHealth << std::endl;
    std::cout << "level:" << mLevel << std::endl;
}

};

int main()
{
    int x = 2;
    int y(2);
    int y{ 2 };
    int z = { 2 };

    Monster m1 = Monster(1);
    Monster m2(10, 100);
    Monster m3{ 10,100 };
    Monster m4 = { 10,100 };
}

*/

/*
    class Monster
{
private:
    int mHealth{1};
    int mLevel{1};

public:
    Monster(int level = 0, int health = 0) :mHealth{ level }, mLevel{ health } // 생성자
    {
        mLevel = level;
        mHealth = health;

        std::cout << "Create" << std::endl;
    }
 
    void Print()
    {
        std::cout << "health:"<<mHealth << std::endl;
        std::cout << "level:"<<mLevel << std::endl;
    }

};

int main()
{
    Monster m1(10, 100);
    m1.Print();
}
*/

/* Const instance
    #include <iostream>

class MyClass
{
public:
    int mValue1;
    int mValue2;

    MyClass() : MyClass(1,1){}
    MyClass(int v1, int v2):mValue1{v1},mValue2{v2}{}

    void Change(int x, int y)
    {
        mValue1 = x;
        mValue2 = y;
    }

    void Print() const
    {
        std::cout << mValue1 << "," << mValue2 << std::endl;
    }
};

int main()
{
    const MyClass c1{2,2};

    c1.mValue1 = 1;
    c1.Change(1, 1);
    c1.Print();
}
*/

/* static
class MyClass
{
public:
    int mvalue1;

};

void f()
{
    static MyClass c1 {1};

    std::cout <<c1.mvalue1++ << std::endl;
}

int main()
{
    f();
    f();
    f();
}
*/

/*
    class MyClass static variable
{ 
public:
    //선언
    static int mValue1;// 처음 한번만 초기화하고 그 다음은 무시
                       // 인스턴스가 아닌 클래스에 속한 클래스 변수
    void Print()
    {
        std::cout << mValue1<< std::endl;
    }
};

int MyClass::mValue1 = 0;

int main()
{
    MyClass c1;
    MyClass::mValue1 = 1;
    c1.mValue1();

    MyClass c2;

    MyClass::mValue1 = 2;
    c2.mValue1();

}
*/
/* 탄환 생성
    #include <iostream>

class Bullet
{
public:
    static int sCount;
    
    Bullet()
    {
        sCount++;
        std::cout << "[+]" << sCount << std::endl;
    }
    ~Bullet()
    {
        sCount--;
        std::cout << "[-]" << sCount << std::endl;
    }
};

int Bullet::sCount {};

int main()
{
    Bullet b1;
    for (int i = 0; i < 100; i++)
    {
        Bullet b1;
        Bullet* p = new Bullet();
    }
    std::cout << Bullet::sCount << std::endl;
}
*/

/* static Function
    #include <iostream>

class MyClass
{
public:
    static int mValue1;
    static void Function();

};

void MyClass::Function()
{
    std::cout << mValue1 << std::endl;
}

int main()
{
    MyClass c1;
    MyClass::Function();

    MyClass c2;
    MyClass::Function();
}
*/

/* friend
    #include <iostream>

class Sword
{
    friend class Player;
private:
    int mDamage;
public:
    Sword(int dmg):mDamage(dmg){}
};

class Player
{
public:
    void AttackWith(Sword& sword)
    {
        std::cout << "칼을 휘둘러"<<sword.mDamage<<"만큼 피해를 주었다." << std::endl;
    }

    void A(){}
    void B(){}
};


int main()
{
    Sword Muramasa{ 10 };
    Player p1;
    p1.AttackWith(Muramasa);
}
*/

/*
class Sword
{
    friend void Upgrade(Sword& sword);
private:
    int mDamage;
public:
    Sword(int dmg):mDamage(dmg){}
};

void Upgrade(Sword& sword)
{
    int oldDamage = sword.mDamage;
    std::cout << oldDamage << "->" << (sword.mDamage += sword.mDamage) << std::endl;
}

int main()
{
    Sword shortSword(1);
    Upgrade(shortSword);
}
*/

/*
    #include <iostream>

class Sword; // forward declaration

class Player
{
public:
    void AttackWith(Sword& sword);
    void A();
};

class Sword
{
    friend void Player::AttackWith(Sword& sword);
private:
    int mDamage;
public:
    Sword(int dmg) :mDamage(dmg) {}
};

void Player::AttackWith(Sword& sword)
{
    std::cout << "칼을 휘둘러" << sword.mDamage << "만큼 피해를 주었다." << std::endl;
}

int main()
{
    Sword Muramasa{ 10 };
    Player p1;
    p1.AttackWith(Muramasa);
}

*/
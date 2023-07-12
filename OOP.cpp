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

int main()
{
 
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
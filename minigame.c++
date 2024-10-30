// Написал строчки Ваня Безус
#include <iostream>
#include <ctime>
 
using namespace std;
 
double HisHelth = 100; //здоровье противника
double MyHelth = 100; //моё здоровье 
double HisDamage = 10; // урон противника
double MyDamage = 10; // мой урон
double HisHeal = 20; // здоровье противника
double MyHeal = 20; // моё здоровье
 
void HISDamage(double& HisDamage, double& MyHelth)
{
    int CritChance = rand() % 6;
    double Crit = HisDamage * 1.5;
 
    if (CritChance == 0  4)
    {
        MyHelth = MyHelth - Crit;
        cout << "Enemy damage you by " << Crit << endl;
        cout << "Your Healt now is " << MyHelth << endl;
    }
    else
    {
        MyHelth = MyHelth - HisDamage;
        cout << "Enemy damage you by " << HisDamage << endl;
        cout << "Your Healt now is " << MyHelth << endl;
    };
};
 
void HISHeal(double& HisHeal, double& HisHelth)
{
    int CritChance = rand() % 6;
    double Crit = HisHeal * 1.5;
 
    if (CritChance == 0  4)
    {
        HisHelth = HisHelth + Crit;
        cout << "The Enemy was healing by " << Crit << endl;
        cout<< "Enemy's Helth now is " << HisHelth << endl;
    }
    else
    { 
        HisHelth = HisHelth + HisHeal;
        cout << "The Enemy was healing by " << HisHeal << endl; 
        cout << "Enemy's Helth now is " << HisHelth << endl;
    };
};
// Написал Артём Иванычев
int Enemy()
{
    if (HisHelth <= 0)
        cout << "The Enemy is fall! U win!!!" << endl;
    else
    {
        int Action = rand() % 3;
 
        if (HisHelth >= 130)
            Action = 0;
 
        switch (Action)
        {
        case 0 || 1:
            HISDamage(HisDamage, MyHelth);
            break;
        case 2:
            HISHeal(HisHeal, HisHelth);
            break;
        default:
            HISDamage(HisDamage, MyHelth);
                break;
        };
    };
 
    if (HisHelth <= 0)
        cout << "The Enemy is fall! U win!!!" << endl;
 
    return 0;
 
};
 
void MYDamage(double& MyDamage, double& HisHelth)
{
    int CritChance = rand() % 6;
    double Crit = MyDamage * 1.5;
 
    if (CritChance == 0  4)
    {
        HisHelth = HisHelth - Crit;
        cout << "U damage Enemy by " << Crit << endl;
        cout << "Enemy's Healt now is " << HisHelth << endl;
    }
    else 
    {
        HisHelth = HisHelth - MyDamage;
        cout << "U damage Enemy by " << MyDamage << endl;
        cout << "Enemy's Healt now is " << HisHelth << endl;
    };
};
void MYHeal(double& MyHeal, double& MyHelth)
{
    int CritChance = rand() % 6;
    double Crit = MyHeal * 1.5;
 
    if (CritChance == 0  4)
    {
        MyHelth = MyHelth + Crit;
        cout << "You was healing yourself by " << Crit << endl;
        cout << "Yours Helth now is " << MyHelth << endl;
    }
    else
    {
        MyHelth = MyHelth + MyHeal;
        cout << "You was healing yourself by " << MyHeal << endl;
        cout << "Yours Helth now is " << MyHelth << endl;
    };
};
 
int MySelf()
{
    if (MyHelth <= 0)
        cout << "U're dead!!! Enemy win!!!" << endl;
 
            int MyAction = 0;
            cout << "What are You want to do? 1 - Damage, 2 - Heal..." << endl;
            cin >> MyAction;
 
        
            switch (MyAction)
            {
            case 1:
                MYDamage(MyDamage, HisHelth);
                break;
            case 2:
                MYHeal(MyHeal, MyHelth);
                break;
 
            default:
                MySelf();
                break;
            };
 
    if (MyHelth <= 0)
        cout << "U're dead!!! Enemy win!!!" << endl;

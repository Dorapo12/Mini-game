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

#include "Tank.h"
#include <iostream>
namespace BattlingTanks{
Tank::Tank(int x,int y)
//:projectile(x,y)
{
    set_position(x,y);
    int health = 100;
}
Tank::~Tank()
{
    //dtor
}
void Tank::set_position(int x,int y)
{
    this->x = x;
    this->y = y;
}
Projectile Tank::shoot(int x,int y)
{
    Projectile projectile(x,y);
    return projectile;
}
bool Tank::get_shot(int x,int y)
{
    bool shot = false;
    if(x==this->x&&y==this->y)
    {
        health = 0;
        shot = true;
        std::cout<<"Tank got shot ="<<shot<<std::endl;
    }
    std::cout<<"Shot is "<<shot<<std::endl;
    return shot;
}
int Tank::get_health()
{
    return health;
}
int Tank::get_x()
{
    return x;
}
int Tank::get_y()
{
    return y;
}
}

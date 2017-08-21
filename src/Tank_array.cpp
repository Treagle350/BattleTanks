#include "Tank_array.h"
#include <iostream>

namespace BattlingTanks{
Tank_array::Tank_array(int amount)
{
    this->amount = amount;
    int number_of_tanks = 0;
}
Tank_array::~Tank_array()
{
    //dtor
}
void Tank_array::add_tank(int x,int y)
{
    tanks.push_back(new Tank(x,y));
    number_of_tanks = number_of_tanks + 1;
}
Tank* Tank_array::get_tank(int i)
{
    std::cout<<"returning a tank of i = "<< i <<std::endl;
    //tanks[i]->//get value from vector
    std::cout<<"tank value = "<<tanks[i]<<std::endl;
    return tanks[i];
    //return tanks.at(i);
}
int Tank_array::get_number_of_tanks()
{
    return number_of_tanks;
}
}

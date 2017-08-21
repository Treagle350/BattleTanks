#include "NPC.h"
#include <stdlib.h>

namespace BattlingTanks{
NPC::NPC()
:tanks(2)
{
    std::cout<<"Constructing npc"<<std::endl;
    for(int i = 0;i<2;i++){
        generate_enemy_tank();
        std::cout<<"Generating enemy tank #"<<i<<std::endl;
    }
}
NPC::~NPC()
{
    //dtor
}
void NPC::generate_enemy_tank()
{
    int subX = 0 + (rand() % 3);
    int subY = 0 + (rand() % 3);
    std::cout<<"x:"<<subX<<"y:"<<subY<<std::endl;
    add_tank(subX,subY);
}
void NPC::add_tank(int x,int y){
    //Base_Player_Class::add_tank(x,y);
    tanks.add_tank(x,y);
    npc_board.change_tile(x,y,"[.]");
}
void NPC::collect_the_fallen(){
    for(unsigned int i=0; i<tanks.tanks.size(); i++ ){
        if(tanks.tanks.at(i)->get_health() == 0){
            npc_board.change_tile(tanks.tanks[i]->get_x(),tanks.tanks[i]->get_y(),"[X]");
            //tanks.tanks.erase(tanks.tanks.begin()+i);//delete tank object//Culprit found
        }
    }
}
Board NPC::get_board()
{
    return npc_board;
}
Tank_array NPC::get_tank_array()
{
    std::cout<<"returning a tank array"<<std::endl;
    return tanks;
}
}
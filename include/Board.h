#pragma once
#include <iostream>
namespace BattlingTanks{
class Board
{
    public:
        Board();
        virtual ~Board();

        void change_tile(int x, int y, std::string sprite);
        void display_grid();

    protected:

    private:
        int ROW;
        int COL;

        std::string board_array[3][3];

        void generate_board_grid();
};
}

#pragma once
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

using namespace std;

namespace pandemic{

    class Player{
        private:
        int city;
        Board board;
   
        public:
        Player(Board& board, int city);
        virtual Player& drive(City c);
        virtual Player& fly_direct(City c);
        virtual Player& fly_charter(City c);
        virtual Player& fly_shuttle(City c);
        virtual Player& build(); //don't get a paramters
        virtual Player& discover_cure(Color c);
        virtual Player& treat(City c);
        virtual Player& take_card(City c);
        std::string role(); // no virtual return string
    };
}
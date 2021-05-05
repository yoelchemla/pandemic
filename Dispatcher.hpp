#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{
class Dispatcher: public Player{

public:
    Dispatcher(pandemic::Board& board, int city);
    Dispatcher& fly_direct(City city) override;
};
}
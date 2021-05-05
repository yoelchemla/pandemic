#pragma once
#include "Player.hpp"

namespace pandemic{
class Virologist: public Player{

public:
Virologist(pandemic::Board &board, int city);
Virologist& treat(City c) override;
 };
}
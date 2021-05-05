#pragma once
#include"Player.hpp"

namespace pandemic{
class FieldDoctor: public Player{

public:
FieldDoctor(pandemic:: Board& board, int city);
FieldDoctor& treat(City city) override;
 };
}

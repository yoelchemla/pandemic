#pragma once
#include "Player.hpp"
namespace pandemic{
    class Medic: public Player{
        
    public:
    
    Medic(pandemic:: Board &board, int city);
    Medic &treat( City c) override;
    };
}
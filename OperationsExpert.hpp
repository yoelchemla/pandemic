#pragma once
#include "Player.hpp"


namespace pandemic{
    class OperationsExpert: public Player{
    
    public:
    OperationsExpert(pandemic:: Board &board, int city);
    OperationsExpert& build()override ;
    };
}
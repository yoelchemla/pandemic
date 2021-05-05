#pragma once 
#include "Player.hpp"

namespace pandemic{

    class GeneSplicer: public Player{
        
        public:
        GeneSplicer(pandemic:: Board& board, int city);
        GeneSplicer& discover_cure(Color color) override;
    };

}

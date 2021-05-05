#pragma once
#include "Player.hpp"

namespace pandemic{
    class Researcher: public Player{
    
    public:
        Researcher(pandemic::Board& board, int city);
        Researcher& discover_cure(Color color) override;
    };
}
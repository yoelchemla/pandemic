
#pragma once
#include "Player.hpp"
#include "Color.hpp"
namespace pandemic{
    class Scientist : public Player {
    private:
     int n;
    
    public:
    //Scientist(pandemic::Board& board, int city);
    Scientist(pandemic::Board& board, int city,int n);
    Scientist& discover_cure(Color color)override;  
    };
}
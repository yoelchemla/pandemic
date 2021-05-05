#include "Virologist.hpp"

//empty implements

pandemic::Virologist &pandemic::Virologist::treat(pandemic::City city) {
    return *this;
}


//consructor
pandemic::Virologist::Virologist(pandemic::Board& board, int city): Player(board, city){
}



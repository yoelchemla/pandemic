#include "GeneSplicer.hpp"
#include "Color.hpp"
#include "City.hpp"


//empty implements
pandemic::GeneSplicer::GeneSplicer(pandemic::Board& board, int city) : Player(board, city){
}

pandemic::GeneSplicer &pandemic::GeneSplicer::discover_cure(Color color) {
    return *this;
}
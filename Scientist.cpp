#include "Scientist.hpp"
#include "Player.hpp"
#include "Color.hpp"

//constructor
pandemic::Scientist::Scientist(pandemic::Board& board, int city, int n): Player(board, city){
    this->n = n;
}

pandemic::Scientist &pandemic::Scientist::discover_cure(Color color) {
    return *this;
}
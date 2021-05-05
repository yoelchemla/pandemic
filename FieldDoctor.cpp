#include "FieldDoctor.hpp"
#include "Color.hpp"
//constructor
pandemic::FieldDoctor::FieldDoctor(pandemic::Board& board, int city) : Player(board, city){

}


pandemic::FieldDoctor &pandemic::FieldDoctor::treat(City city) {
    return *this;

}
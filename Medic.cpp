#include "Medic.hpp"
#include "City.hpp"


//empty implements

//constructor
pandemic::Medic::Medic(pandemic:: Board &board, int city): Player(board, city){

}
//the function that override
pandemic::Medic &pandemic::Medic::treat(City city) {
    return *this;
}
#include "Researcher.hpp"

//constructor
pandemic::Researcher::Researcher(pandemic::Board &board,  int city): Player(board, city){
}
//the function that override
pandemic::Researcher &pandemic::Researcher::discover_cure(pandemic::Color color){
return *this;
}
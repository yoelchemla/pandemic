#include "OperationsExpert.hpp"

//constructor
pandemic::OperationsExpert::OperationsExpert(pandemic:: Board &board, int city) : Player(board, city){

}

//the function that override
pandemic::OperationsExpert &pandemic::OperationsExpert::build() {
    return *this;
}

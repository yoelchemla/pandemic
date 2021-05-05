#include "Dispatcher.hpp"
#include "Player.hpp"
//constructor
pandemic::Dispatcher::Dispatcher(pandemic::Board& board, int city) : Player(board, city) { 

}
 
pandemic::Dispatcher &pandemic::Dispatcher::fly_direct(City city) {
    return *this;
}


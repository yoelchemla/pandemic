#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"


pandemic:: Player:: Player(Board& board, int city){
this->city = city;
this->board = board;
}

//Empty realizations
pandemic::Player &pandemic::Player::drive(City city) {
    return *this;
}

pandemic::Player &pandemic::Player::fly_direct(City city) {
    return *this;
}

pandemic::Player &pandemic::Player::fly_charter(City city) {
    return *this;
}

pandemic::Player &pandemic::Player::fly_shuttle(City city) {
    return *this;
}

pandemic::Player &pandemic::Player::build() {
    return *this;
}

pandemic::Player &pandemic::Player::discover_cure(pandemic::Color color) {
    return *this;
}

pandemic::Player &pandemic::Player::treat(City city) {
    return *this;
}

pandemic::Player &pandemic::Player::take_card(City city) {
    return *this;
}

std::string pandemic::Player::role() {
return " ";
}

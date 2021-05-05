#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <map>
#include <set>
#include <iostream>

namespace pandemic {

class Board {
   static std:: map<City, std::set<City>>connection;
   std:: map<City, int> cube;
   
   public:
   
   Board(){};
   int& operator[](City c);
   friend std::ostream& operator<<(std::ostream& os,const Board& board);
   bool is_clean();
   void remove_cures();
    };
}
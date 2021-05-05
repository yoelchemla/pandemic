
#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <stdexcept>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "Color.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"


using namespace pandemic;
using namespace std;


//i check if the cities connection
TEST_CASE("Drive")
{
  Board board;
  Player p{board, City::London};

  CHECK_NOTHROW(p.drive(City::Madrid)); //madrid is connection to london
  CHECK_NOTHROW(p.drive(City::SaoPaulo)); // sao paulo is connection to madrid
  CHECK_NOTHROW(p.drive(City::BuenosAires)); // buenos aires is connection to sao paulo
  CHECK_NOTHROW(p.drive(City::Bogota)); // bogota is connection to buenos aires
  CHECK_NOTHROW(p.drive(City::Lima)); //lima is connection to bogota
  CHECK_NOTHROW(p.drive(City::MexicoCity)); // mexico city is connection to lima
  CHECK_NOTHROW(p.drive(City::LosAngeles)); //los angeles is connection to mexico city
  CHECK_NOTHROW(p.drive(City::SanFrancisco)); // san francisco is connection tolos angeles
  CHECK_NOTHROW(p.drive(City::Chicago)); //chicago is connection to san francisco
  CHECK_NOTHROW(p.drive(City::Montreal)); // madrid is connection to buenos aires
  CHECK_NOTHROW(p.drive(City::NewYork)); //new york is connection to montreal
  CHECK_NOTHROW(p.drive(City::Washington)); // washington is connection to new york
  CHECK_NOTHROW(p.drive(City::Atlanta)); //atlanta is connection to washington
  CHECK_NOTHROW(p.drive(City::Miami)); // miami is connection to atlanta
  CHECK_NOTHROW(p.drive(City::Bogota)); //bogota is connection to miami
  CHECK_NOTHROW(p.drive(City::SaoPaulo)); //sao paulo is connection to bogota
  CHECK_NOTHROW(p.drive(City::Lagos)); // lagos is connection to sao paulo
  CHECK_NOTHROW(p.drive(City::Kinshasa)); // kinshasa is connection to lagos
  CHECK_NOTHROW(p.drive(City::Johannesburg));// johannesburg is connection to kinshasa
  CHECK_NOTHROW(p.drive(City::Khartoum));// khartoum is connection johannesburg
  CHECK_NOTHROW(p.drive(City::Cairo)); // cairo is connection to khartoum
  //CHECK_THROWS(p.drive(City::Mumbai)); // mumbai isn't connection to atlanta-  false
  //CHECK_THROWS(p.drive(City::Cairo)); // cairo isn't connection to mumbai-  false
  //CHECK_THROWS(p.drive(City::Paris)); // paris isn't connection to cairo-  false
  //CHECK_THROWS(p.drive(City::Seoul)); // seoul isn't connection to paris-  false
  //CHECK_THROWS(p.drive(City::Riyadh)); // riyadh isn't connection to seoul-  false
  //CHECK_THROWS(p.drive(City::Sydney)); // sydney isn't connection to riyadh-  false
  //CHECK_THROWS(p.drive(City::Milan)); // milan isn't connection to sydeny-  false
 
  }

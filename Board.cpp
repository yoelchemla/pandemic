#include "Board.hpp"
using namespace std;
using namespace pandemic;

bool pandemic::Board::is_clean() {
    return true;
}

void pandemic::Board:: remove_cures(){
}

int& Board:: operator[](City c){
    return cube[c];
} 

ostream& pandemic:: operator<<(ostream &os, const Board &c) {
        os<<"yoel chemla";
        return os;
}

std::map<City, std::set<City>> Board::connection{
    {Algiers, {Madrid, Paris, Istanbul, Cairo}},
    {Atlanta, {Chicago, Miami, Washington}},
    {Baghdad, {Riyadh, Cairo, Istanbul, Tehran, Karachi}},
    {Bangkok, {Kolkata, HongKong, Jakarta, Chennai, HoChiMinhCity}},
    {Beijing, {Shanghai, Seoul}},
    {Bogota, {MexicoCity, Miami, Lima, SaoPaulo, BuenosAires}},
    {BuenosAires, {SaoPaulo, Bogota}},
    {Cairo, {Algiers, Istanbul, Baghdad, Khartoum, Riyadh}},
    {Chennai, {Mumbai, Delhi, Kolkata, Bangkok, Jakarta}},
    {Chicago, {SanFrancisco, LosAngeles, MexicoCity, Atlanta, Montreal}},
    {Delhi, {Tehran, Karachi, Mumbai, Chennai, Kolkata}},
    {Essen, {London, Paris, Milan, StPetersburg}},
    {HoChiMinhCity, {Jakarta, Bangkok, HongKong, Manila}},
    {HongKong, {Bangkok, Kolkata, HoChiMinhCity, Shanghai, Manila, Taipei}},
    {Istanbul, {Milan, Algiers, StPetersburg, Cairo, Baghdad, Moscow}},
    {Jakarta, {Chennai, Bangkok, HoChiMinhCity, Sydney}},
    {Johannesburg, {Kinshasa, Khartoum}},
    {Karachi, {Tehran, Baghdad, Riyadh, Mumbai, Delhi}},
    {Khartoum, {Cairo, Lagos, Kinshasa, Johannesburg}},
    {Kinshasa, {Lagos, Khartoum, Johannesburg}},
    {Kolkata, {Delhi, Chennai, Bangkok, HongKong}},
    {Lagos, {SaoPaulo, Khartoum, Kinshasa}},
    {Lima, {MexicoCity, Bogota, Santiago}},
    {London, {NewYork, Madrid, Essen, Paris}},
    {LosAngeles, {SanFrancisco, Chicago, MexicoCity, Sydney}},
    {Madrid, {London, NewYork, Paris, SaoPaulo, Algiers}},
    {Manila, {Taipei, SanFrancisco, HoChiMinhCity, Sydney}},
    {MexicoCity, {LosAngeles, Chicago, Miami, Lima, Bogota}},
    {Miami, {Atlanta, MexicoCity, Washington, Bogota}},
    {Milan, {Essen, Paris, Istanbul}},
    {Montreal, {Chicago, Washington, NewYork}},
    {Moscow, {StPetersburg, Istanbul, Tehran}},
    {Mumbai, {Karachi, Delhi, Chennai}},
    {NewYork, {Montreal, London, Washington, Madrid}},
    {Osaka, {Taipei, Tokyo}},
    {Paris, {Algiers, Essen, Madrid, Milan, London}},
    {Riyadh, {Baghdad, Karachi, Cairo}},
    {SanFrancisco, {LosAngeles, Chicago, Tokyo, Manila}},
    {Santiago, {Lima}},
    {SaoPaulo, {BuenosAires, Lagos, Bogota, Madrid}},
    {Seoul, {Beijing, Tokyo, Shanghai}},
    {Shanghai, {Beijing, Taipei, HongKong, Seoul, Tokyo}},
    {StPetersburg, {Moscow, Essen, Istanbul}},
    {Sydney, {Jakarta, Manila, LosAngeles}},
    {Taipei, {Shanghai, HongKong, Osaka, Manila}},
    {Tehran, {Baghdad, Moscow, Karachi, Delhi}},
    {Tokyo, {Seoul, Shanghai, Osaka, SanFrancisco}},
    {Washington, {Montreal, Atlanta, Miami, NewYork }}};

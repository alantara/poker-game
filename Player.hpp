#pragma once
#include "Card.hpp"
#include <string>

class Player{
    private:
    int chips;
    Card hand[2];
    std::string name;
    
    public:
    Player();
    ~Player();

    int bet();
    //chech e call

};
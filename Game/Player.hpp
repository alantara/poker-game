#pragma once

#include "Card.hpp"
#include <string>
#include <iostream>

class Player{
    private:
    int chips;
    Card hand[2];
    std::string name;
    
    public:
    Player(int c=0, Card* h= NULL, std::string n= "");
    ~Player();

    int bet(int value);
    //check e call

};
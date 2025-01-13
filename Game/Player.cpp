#include "Player.hpp"

Player::Player(int c, Card* h, std::string n){
    chips=c;

    hand[0] = h[0];
    hand[1] = h[1];

    name = n;
}

Player::~Player(){
}

int Player::bet(int value){
    if(value==0){
        std::cout << "Player checks!"<< std::endl;
        return 0;
    }

    else if(chips>=value){
        chips-=value;
        return value;
    }

    else{
        int buff = chips;
        chips=0;
        std::cout << "Player " << name << " is all win!" << std::endl;
        return buff;
    }

}


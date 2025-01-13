#include "Deck.hpp"

Deck::Deck(){
    char naipes[4] = {'H', 'D', 'C', 'S'};
    for(int i =1;i<=13; i++){
        for(int j=0;j<4;j++){
            Card carta(i,naipes[j]);
            cards.push_back(carta);
        }
    }
    position = &cards.back();
}

Deck::~Deck(){

}

void Deck::shuffle(){
    std::random_shuffle(cards.begin(),cards.end());
}

Card Deck::deal(){
    Card* copy = position; 
    position--; //acho q n funciona

    return *copy;
}
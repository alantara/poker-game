#pragma once

#include "Card.hpp"
#include <vector>
#include <algorithm>

class Deck{
    private:
    std::vector<Card> cards;
    Card* position;

    public:
    Deck();
    ~Deck();
    void shuffle();
    Card deal();
};
#pragma once

class Card{
    private:
    int value;
    char suit;

    public:
    Card(int val=0, char s='x');
    ~Card();
    
};
#pragma once
#include "Types.h"

class MessageA {
private:
    int a_;
    float b_;

public:
    MessageA(int a = 0,float b = 0): a_(a), b_(b) {}
    int getA() const { return a_; }
    float getB() const { return b_; }
};

class MessageB {
private:
    Prices prices_;
    MyPrice price_;

public:
    MessageB(Prices prices = Prices(), MyPrice price = MyPrice()): 
        prices_(prices),
        price_(price) {}
    Prices getPrices() const { return prices_; }
    MyPrice getPrice() const { return price_; }
};
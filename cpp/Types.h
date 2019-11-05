#pragma once
typedef float MyPrice;
struct Prices {
private:
    float low_;
    MyPrice high_;
public:
    Prices(float low = 0,MyPrice high = MyPrice()) : 
        low_(low), 
        high_(high) {}
    float getLow() const { return low_; }
    MyPrice getHigh() const { return high_; }
};
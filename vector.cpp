#include <iostream>

class Vector{
    public:
    int x;
    int y;
    double length();
    Vector normalize();
};

double Vector::length(){
    return (x^x+y^y);
}

Vector Vector::normalize(){
    double Len = length(); 
    return {x = x/Len, y = y/Len}; 
}

int main(){
    return 0;
}
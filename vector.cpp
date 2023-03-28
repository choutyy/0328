#include <iostream>

class Vector{
    int x;
    int y;
    double length(int, int);
    int normalize(int, int);
};

double Vector::length(int x, int y){
    return (x^2+y^2);
}

int Vector::normalize(int x, int y){
    return 1; 
}

int main(){
    return 0;
}
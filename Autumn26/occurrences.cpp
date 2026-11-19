#include <iostream>

void f(int& a, int& b){
    b = 1;
    a = 2;
}

int main(){
    int a = 3, b = 2, c = 1;
    f(c, c);
    std::cout << c << std::endl;
}
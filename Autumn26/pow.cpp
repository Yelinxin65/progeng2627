#include <iostream>
#include <cmath>

double mypow(double x, int n){
    double result = 1;
    
    for(int i = 0; i < n; i++){
        result = x * result;
    }

    return result;
}

/*
int main(){ 
    double x;
    int n;
    std::cout << "please enter the base" << std::endl;
    std::cin >> x;
    std::cout << "please enter the n" << std::endl;
    std::cin >> n;
    std::cout << 



 }
*/

int main(){
    std::cout << mypow(2, 3) << std::endl;
}
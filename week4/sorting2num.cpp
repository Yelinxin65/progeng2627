#include <iostream>

void sort_two_numbers(double& s1, double& s2){
    if(s1<s2){
        s1=s1;
    }
    else if(s1>s2){
        int tmp;
        tmp = s1;
        s1 = s2;
        s2 = tmp;    
    }
}

int main(){
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;
}
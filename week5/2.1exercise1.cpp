#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int size, n;
    std::cout << "what's size is your vector" << std::endl;
    std::cin >> size;
    for(int i=0; i<size; i++){
        std::cin >> n;
        v.push_back(n);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}
#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int min = 0;
    if (vin.size()==0){
        return-1;
    }
    for(int i=1; i< vin.size(); i++){
        if (vin[i]<vin[min]){
            min = vin[i];
        }
        else{
            min = 0;
        }
    return min;
    }
}

int mian (){
    std::vector<double> v{1,2,3,4}
    std::cout << 
}
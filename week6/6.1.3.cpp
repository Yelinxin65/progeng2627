#include <iostream>
#include <fstream>
#include <cstdlib>


int main(){
    std::ifstream infile; 
    std::string name;
    std::cin >> name;
    infile.open(name);

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}
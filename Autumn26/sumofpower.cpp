#include <iostream>
#include <cmath>

int main(){
    double base, exp, n, ans = 0;
    std::cin >> base >> exp;
    for (n = 1; n < exp + 1; n++ ){
        ans = ans + std::pow(base, n);

    }
    std::cout << ans << std::endl;
   
}

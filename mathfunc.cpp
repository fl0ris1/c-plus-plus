#include <iostream>
#include <cmath>

int main(){
    int x = 5;
    int y = 6;
    int z;

    z = std::max(x,y);

    std::cout<<z<<'\n';
    std::cout<<std::min(x,y)<<'\n';

    std::cout<<pow(2,3)<<'\n'; //base to the power of
    std::cout<<sqrt(81)<<'\n'; //square root
    std::cout<<abs(-25)<<'\n'; //absolute value (negative value * -1)
    std::cout<<round(3.7)<<'\n'; //round
    std::cout<<ceil(5.1)<<'\n'; //ceiling
    std::cout<<floor(9.7);
    return 0;
}
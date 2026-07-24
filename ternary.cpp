#include <iostream>

int main(){

    int grade=55;
    int num=3;

    grade>=55?std::cout<<"Pass"<<'\n':std::cout<<"Fail"<<'\n';

    std::cout<<(num%2?"ODD":"EVEN"); // 0 is odd, 1 is even
    //num%2?std::cout<<"ODD":std::cout<<"EVEN";

    return 0;
}
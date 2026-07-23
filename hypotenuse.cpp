#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout<<"Input Leg A: ";
    std::cin>>a;

    std::cout<<"Input Leg B: ";
    std::cin>>b;

    c=sqrt(pow(a,2)+pow(b,2));

    std::cout<<"The Hypotenuse of Your Triangle is: "<<c;

    return 0;
}
#include <iostream>

double calc_area(double width, double height); //if value returned, void should be the data type returned

int main(){
    
    double width = 12;
    double height = 3;
    
    double area = calc_area(width, height);
    
    std::cout<<area;
    
    return 0;
}

double calc_area(double width, double height){ //if value returned, void should be the data type returned
    double result =  width * height;
    return result;
}
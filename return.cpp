#include <iostream>

double calc_area(double width, double height); //if value returned, void should be the data type returned
std::string fullName(std::string firstName, std::string lastName);

int main(){
    
    double width = 12;
    double height = 3;
    
    double area = calc_area(width, height);
    
    std::cout<<area<<'\n';
    
    
    std::string firstName = "Floris";
    std::string lastName = "W";
    
    std::string name = fullName(firstName, lastName);
    
    std::cout<<name;
    
    return 0;
}

double calc_area(double width, double height){ //if value returned, void should be the data type returned
    double result =  width * height;
    return result;
}


std::string fullName(std::string firstName, std::string lastName){
    return firstName+" "+lastName;
}

#include <iostream>

//typedef std::string string;
//typedef int integer;

using string = std::string;  //more suitable for templates
using integer = int;

int main(){
    string a="Hello";
    integer b=5;
    std::cout << a;
    std::cout << b+b;
    return 0;
}
#include <iostream>

void add_num(int a, int b);

int main(){
    add_num(2, 4);
    return 0;
}

void add_num(int a, int b){
    std::cout<<a+b;
}
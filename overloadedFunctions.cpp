#include <iostream>

void overloadedFunc();
void overloadedFunc(int a);
void overloadedFunc(int a, int b);

int main(){
    overloadedFunc();
    overloadedFunc(1);
    overloadedFunc(1,2);
    
    return 0;
}


void overloadedFunc(){
    std::cout<<"No Parameters"<<'\n';
}

void overloadedFunc(int a){
    std::cout<<"1 Parameter"<<'\n';
}

void overloadedFunc(int a, int b){
    std::cout<<"2 Parameters"<<'\n';
}

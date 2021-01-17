#include<iostream>

int main(){
    int a;
    std::cout<<"please input a number"<<std::endl;
    std::cin>>a;
    while(a>=1){
        std::cout<<"*";
        a = a - 1;
    }
    std::cout<<std::endl;
}

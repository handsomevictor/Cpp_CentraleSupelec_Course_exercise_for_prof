#include<iostream>

int main(){
    int a, b;
    std::cout<<"please type the first number"<<std::endl;
    std::cin>>a;
    std::cout<<"please type the second number"<<std::endl;
    std::cin>>b;
    if(a%b==0){
        std::cout<<"the first input number is a multiple of the second"<<std::endl;
    }else{
        std::cout<<"the first input number is not a multiple of the second"<<std::endl;
    }
}

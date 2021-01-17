#include<iostream>
int main(){
    int k;
    std::cout<<"please input a number to indicate which output you want to see, choose from 1, 2 and 3"<<std::endl;
    std::cin>>k;
    if(k == 1){
        int a = 5, b;
        while(a>=1){
                b = 5;
                while(b>=1){
                    std::cout<<"*";
                    b = b - 1;
                }
            std::cout<<std::endl;
            a = a - 1;
            }
        std::cout<<std::endl;
    }else if(k == 2){
        int a = 1, b;
        while(a<=5){
                b = a;
                while(b>=1){
                    std::cout<<"*";
                    b = b - 1;
                }
            std::cout<<st
            d::endl;
            a = a + 1;
            }
    }else if(k == 3){
        int a = 5, b;
        while(a>=1){
                b = a;
                while(b>=1){
                    std::cout<<"*";
                    b = b - 1;
                }
            std::cout<<std::endl;
            a = a - 1;
            }
    }
}

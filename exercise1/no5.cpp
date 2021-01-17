#include<iostream>

int main(){
    int int a, b=1;
    std::cout<<"please input a number"<<std::endl;
    std::cin>>a;
    while(a>=1){
        b = b * a;
        a = a - 1;
    }
    std::cout<<"the factorial of the input number is"<<b<<std::endl;
}
// from the outcome we know, the largest number of type "int" that can display its factorial is 16
// if we change the "int" to "float", then this number is 34
// if it's "long", then the largest number is 31
// if it's "long long", then the largest number is 39

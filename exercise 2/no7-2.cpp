#include<iostream>
#include<math.h>

/*
Findings about the number of recursive calls:

The first approach is using normal recursive method and the total number of recursive calls equals the power input. 
For example if you want to calculate n-th power of a number M, then the number of recursive calls would be n.

But the second method is an optimized way to do the calculation. It adopts the idea of binary sort. If the number of 
power is n, then the largest number of recursive calls would be floor(log2(n))+1, which is far less than that of normal recursive method.
*/

using namespace std;
int power(float a, int n);

int main(){
    int n;
    float a;
    cout<<"please indicate the number that you want to power: ";
    cin >> a;
    cout<<"please indicate the exponential n: ";
    cin >> n;

    cout<<"the result is: "<<endl<<power(a, n)<<endl;
}

int power(float a, int n){

    static int k=1;
    if(n<0){
        cout<<"please enter an integer larger than 0!"<<endl;
    }else if(n==0){
        return 1;
    }else if(n==1){
        cout<<"It's the "<<k<<"-th recursive call"<<endl;
        k = k+1;
        return a;
    }else if(n%2==0){
        cout<<"It's the "<<k<<"-th recursive call"<<endl;
        k = k+1;
        return pow(power(a, n/2),2);
    }else{
        cout<<"It's the "<<k<<"-th recursive call"<<endl;
        k = k+1;
        return a*pow(power(a, (n-1)/2),2);
    }
}

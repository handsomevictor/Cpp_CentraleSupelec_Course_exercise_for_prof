#include<iostream>
#include<math.h>

using namespace std;

int fibonacci(int n);
int k = 1;
int main(){
    int n;
    cout<<"please say the n-th one that you want to see: ";
    cin >> n;
    cout<<"the number of n-th is: "<<fibonacci(n)<<endl;
    cout<<"the number of recursive calls is: "<<k<<endl;
}

int fibonacci(int n){
    if(n==1){
        return 1;
    }else if(n==0){
        return 0;
    }else if(n>=2){
        k = k+1;
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

#include<iostream>
#include<math.h>

using namespace std;
int power(float a, int n);

int main(){
    int n;
    float a;
    cout<<"please indicate the number that you want to power: ";
    cin >> a;
    cout<<"please indicate the exponential n: ";
    cin >> n;

    cout<<"the result is: "<<power(a, n)<<endl;
}

int power(float a, int n){
    static int k=1;
    if(n==1){
        cout<<"It's the "<<k<<" recursive call"<<endl;
        return a;
    }else{
        cout<<"It's the "<<k<<"-th recursive call"<<endl;
        k = k+1;
        return a*power(a, n-1);
    }
}

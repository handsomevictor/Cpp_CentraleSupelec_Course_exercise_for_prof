#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    int k = 1;
    int j = 1;
    int p = 1;
    cout<<"please input the number of lines you want to see: ";
    cin >> n;

    while(k<=n){
        j = 1;
        while(j<=k){
            cout<<p<<" ";
            p = p+1;
            j = j+1;
        }
        cout<<endl;
        k = k+1;
    }
}

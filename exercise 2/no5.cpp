#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cout<<"please say the n-th one that you want to see: ";
    cin >> n;
    int i;
    int m;
    int k = 1;
    int w = 0;
    i = 0;
    m = 1;
    while(k<=n-1){
        w = i+m;
        i = m;
        m = w;
        k = k+1;
    }
    cout<<"the number of n-th is: "<<w<<endl;
}

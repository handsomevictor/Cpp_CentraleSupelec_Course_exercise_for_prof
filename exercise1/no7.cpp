#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int max,min;
	int i;

	for(i=0;i<10;i++){
        cin>>a[i];
	}
	max=a[0];
	min=a[0];
	for(i=0;i<10;i++){
        if(a[i]>=max){
            max=a[i];
            }else if(a[i]<=min){
            min=a[i];
            }
	}
    cout << "max="<<max<<endl;
    cout << "min="<<min<<endl;
    return 0;
}

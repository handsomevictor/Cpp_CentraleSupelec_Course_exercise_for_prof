#include<iostream>
using namespace std;
double power(double a, int n);
double abs(double a);

int main()
{
	float k;
	float dif = 0.8;
	int n = 2;
	bool m;
	cout<<"please input a k to determine the maximal difference of pi_n+1 and pi_n"<<endl;
	cin>>k;
	cout<<"k is "<<abs(k)<<endl;
	m = (dif>abs(k));
	cout<<"m is "<<m<<endl;
	while(dif>abs(k)){
        n = n + 1;
        dif = abs(float(4/(2*n+1)));
        cout<<k<<endl;
        //cout<<n<<endl;
	}
	cout<<"the n that makes the difference small enough is "<<n<<endl;
}

// get the nth power of a number
double power(double a, int n){
    double k = 1.0;
    while(n>=1){
      k = a * k;
      n = n - 1;
    }
    return(k);
}
// get the absolute value
double abs(float a){
    if(a<float(0)){
        return (-a);
    }else{
        return(a);
    }
}


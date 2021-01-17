#include<iostream>
using namespace std;
double power(double a, int n);

int main()
{
	int n;
	double pi = 0;
	cout<<"please input an n to determine the approximation level of pi"<<endl;
	cin>>n;
	while(n>=0){
        pi = pi + power((-1), n)*4/(2*n+1);
        n = n - 1;
	}
	cout<<"the approximation of pi is "<<pi<<endl;
	return pi;
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

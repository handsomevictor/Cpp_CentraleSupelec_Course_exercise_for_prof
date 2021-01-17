#include<iostream>
#include<math.h>

using namespace std;

bool swap(double x1, double x2, double &y1, double &y2){
  y1 = x2;
  y2 = x1;
  return true;
}

int main(){
    double x1, x2, y1, y2;
    cout << "Please input x1"<<endl;
    cin >> x1;
    cout << "Please input x2"<<endl;
    cin >> x2;
    cout <<endl;

    if (swap(x1, x2, y1, y2)){
        x1 = y1;
        x2 = y2;
    cout<<"After swapping,"<<endl<<"x1 is "<< y1 <<endl<< "x2 is "<< y2 << endl;
    }
    return 0;
}

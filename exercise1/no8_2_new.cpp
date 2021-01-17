#include<iostream>
double abs(double a);
using namespace std;

int main(){
    float k;
    cout<<"please input the difference"<<endl;
    cin>>k;
    float pi = 0, now;
    int n = 1,
    flag = 1;
    now = 1.0/n;
    do{
        pi = pi+now*(flag)*4;
        flag = -flag;
        n += 2;
        now = 1.0/n;
    }while(abs(now)>=k);
    cout<<"the n to approximate pi is "<<n<<endl;
    cout<<"in this case, the pi is "<<pi<<endl;
    return 0;
}

double abs(float a){
    if(a<float(0)){
        return (-a);
    }else{
        return(a);
    }
}

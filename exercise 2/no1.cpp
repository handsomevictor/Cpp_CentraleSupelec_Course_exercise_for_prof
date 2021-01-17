#include<iostream>
#include<math.h>

using namespace std;
bool is_in_circle(float radius, float x_center, float y_center, float x1, float y1);

int main(){
    float radius;
    float x1;
    float y1;
    float x_center;
    float y_center;
    cout<<"please input the radius radius:";
    cin>>radius;
    cout<<endl;
    cout<<"please input the circle center x-coordinate:";
    cin>>x_center;
    cout<<endl;
    cout<<"please input the circle center y-coordinate:";
    cin>>y_center;
    cout<<endl;
    cout<<"please input the x1:";
    cin>>x1;
    cout<<endl;
    cout<<"please input the y1:";
    cin>>y1;
    cout<<endl;
    if(is_in_circle(radius, x_center, y_center, x1, y1)){
        cout<<"the point is within the circle";
    }else{
        cout<<"the point is without the circle";
    }
    return 0;
}

bool is_in_circle(float radius, float x_center, float y_center, float x1, float y1){
    if((pow((x1-x_center),2)+pow((y1-y_center),2)) <= pow(radius,2)){
        return true;
        }else{
        return false;
        }
}

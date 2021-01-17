// position of a moving body
#include<iostream>
#include<math.h>

using namespace std;

float the_position(float initial_position, float speed, float acceleration, int number_of_times, \
                   float delta);

int main(){
    float initial_position;
    float speed;
    float acceleration;
    int number_of_times;
    float delta;
    cout<<"please input the initial_position";
    cout<<endl;
    cin>>initial_position;
    cout<<"please input the speed";
    cout<<endl;
    cin>>speed;
    cout<<"please input the acceleration";
    cout<<endl;
    cin>>acceleration;
    cout<<"please input the number_of_times";
    cout<<endl;
    cin>>number_of_times;
    cout<<"please input delta";
    cout<<endl;
    cin>>delta;
    cout<<endl;

    int k = 0;
    while(number_of_times>=k){
        cout<<"At time "<< k*delta << "the position is " << \
                                                            the_position(initial_position, speed,\
                                                            acceleration, k, delta)<<endl;
        k=k+1;
    }
}

float the_position(float initial_position, float speed, float acceleration, int number_of_times,\
                       float delta){
    return initial_position + speed*number_of_times*delta + 0.5*acceleration*pow(speed*number_of_times*delta, 2);
}


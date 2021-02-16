#include<iostream>
using namespace std;
#include <string>
#include <vector>
#include <functional>

class Date{
public:
    int day;
    int month;
    int year;

    Date(int day1, int month1, int year1){
        day = day1;
        month = month1;
        year = year1;
    }
};


class Blood{
public:
    int b_sysolic;
    int b_diastolic;
    int b_day;
    int b_month;
    int b_year;

    template <typename T> Blood(int sys, int dia, T dat){
        b_sysolic = sys;
        b_diastolic = dia;
        b_day = dat.day;
        b_month = dat.month;
        b_year = dat.year;
    }
};

class Patient{
protected:
    string name;
    std::vector<int> v_systolic;
    std::vector<int> v_diastolic;
    std::vector<int> v_day;
    std::vector<int> v_month;
    std::vector<int> v_year;

public:
    Patient(string name1){
        name = name1;
    }
    template <typename T> addRecord(T blood){
        v_systolic.push_back(blood.b_sysolic);
        v_diastolic.push_back(blood.b_diastolic);
        v_day.push_back(blood.b_day);
        v_month.push_back(blood.b_month);
        v_year.push_back(blood.b_year);
    }
    void printReport(){
        cout<<"the name is: "<<name<<endl;
        for(int i=0; i<v_systolic.size(); i++){
            cout<<"systolic: "<<v_systolic[i]<<" \tdiastolic: "<<v_diastolic[i]<<" \tdate: "<<v_day[i]<<"/"<<v_month[i]<<"/"<<v_year[i]<<endl;
        }

        //the specific functions that printReport should realize:
        int max_index = 0;
        int max_value = 0;
        int max_pressure_index = 0;
        bool judge;
        float average_total = 0;
        float average = 0;
        max_value = v_systolic[0];

        judge = false;

        int max_pressure_value;
        max_pressure_value = v_systolic[0] + v_diastolic[0];
        for (int i = 0;i<v_systolic.size();i++){
            if (v_systolic[i]>max_value){
                max_value = v_systolic[i];
                max_index = i;
            }
            if (v_systolic[i]>140){
                judge = true;
            }
            average_total = average_total + v_diastolic[i];
        }
        cout << "the highest abnormal systolic blood pressures is: " << v_systolic[max_index]<< " and it's diastolic value is: " <<
            v_diastolic[max_index] << " and it's date is : "
            << v_day[max_index] << "/" << v_month[max_index] << "/" << v_year[max_index] <<endl;

        // realize the 140 thing
        if (judge == false){
            cout << "no measurement was too high" <<endl;
        }else{
            cout << "some measurement was too high"<<endl;
        }
        average = average_total/v_systolic.size();
        cout << "the average diastolic is " << average <<endl;
        cout << "the maximal blood pressures' systolic is " << v_systolic[max_pressure_index]
        << " and the diastolic is : " << v_diastolic[max_pressure_index ] <<endl;
    }
};


int main(){

    Patient mary("Mary");
    mary.addRecord(Blood(94, 61, Date(2,5,2013)));
    mary.addRecord(Blood(97, 65, Date(3,5,2013)));
    mary.addRecord(Blood(144, 99, Date(4,5,2013)));
    mary.addRecord(Blood(123, 88, Date(5,5,2013)));
    mary.addRecord(Blood(177, 110, Date(6,5,2013)));
    mary.addRecord(Blood(145, 89, Date(7,5,2013)));
    mary.printReport();
    cout<<"---------------------------------------------------"<<endl;

    Patient john("John");
    john.addRecord(Blood(88, 57, Date(15,5,2013)));
    john.addRecord(Blood(95, 61, Date(16,5,2013)));
    john.addRecord(Blood(151, 80, Date(17,5,2013)));
    john.addRecord(Blood(151, 96, Date(18,5,2013)));
    john.addRecord(Blood(176, 104, Date(19,5,2013)));
    john.addRecord(Blood(176, 110, Date(20,5,2013)));
    john.printReport();

    return 0;
}

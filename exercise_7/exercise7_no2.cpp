// My name is Zhenning Li
#include <iostream>;

using namespace std;

template <typename T> class StackI{
public:
    virtual void push(T t) = 0;
    virtual void print()=0;
    virtual void pop() = 0;
    virtual T top() =0;
    virtual bool isEmpty() = 0;
};

template <typename T> class Stack: public StackI<T>{
protected:
    T *arr;
    int sizearr;
    int numberobjects = 0;

public:
    Stack(){
        arr = new T[20];
        sizearr = 20;
    }
    Stack(int N){
        arr = new T[N];
        sizearr = N;
    }
public :
    void push(T t){
        arr[sizearr - numberobjects - 1] = t;
        numberobjects += 1;
    }
    void print(){
        if (isEmpty()==false){
            cout << "[";
            for (int i = sizearr - numberobjects; i<sizearr; i++){
                cout << arr[i] << " ";
            }
            cout << "]";
        }else{
            cout << "[]";
        }
    }
    T top(){
        if (isEmpty()==true){
            cout << "there is no object";
        }else{
            return arr[sizearr - numberobjects];
        }
    }
    void pop(){
        if (isEmpty()==true){
            cout << "there is no object";
        }else{
            arr[sizearr - numberobjects] = 0;
            numberobjects -= 1;
        }
    }
    bool isEmpty(){
        if (numberobjects == 0){
            return true;
        }
        return false;
    }
};

int main(){
    Stack<int> s(6);
    cout << "judge if empty: if so print 1 " << s.isEmpty() <<endl;
    s.push(32);
    s.push(14);
    s.push(753);
    s.push(9554);
    s.push(1221);
    s.print();
    cout <<endl;
    cout << "top is "<<s.top() <<endl;
    cout << "delete the top" <<endl;
    s.pop();
    cout <<endl;

    s.print();
    cout <<endl;

    cout << "Empty? if so print 1: " << s.isEmpty() <<endl;

    return 0;
}

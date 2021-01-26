#include <iostream>
#include <cmath>

using namespace std;

double * read_poly(int &n){
    cout << "the maximal degree: ";
    cin >> n;
    double *c = new double[n+1];
    for(int i=0;i<=n;i++){
        cout << "coefficient of degree " << i << ": ";
        cin >> c[i];
    }
    return c;
}

void print_poly(double *c, int n){
    int i;
    cout << c[0];
    if(n>0)
        cout << " + ";
    for(i=1;i<n;i++)
        cout << c[i] << "*x^" << i << " + ";
    if(n>0)
        cout << c[n] << "*x^" << i;
    cout << endl;
}

double calculate_value(double *c, int n, double x){    //c is the polynomial array, n is the highest degree, x is the x value
    double k = 0;
    if(n==0){
        return c[0];
    }else{
        for(int i=0;i<=n;i++){
            k = k+c[i]*pow(x, i);
        }
    }
    return k;
}

double * poli_sum (double * p1, int d1, double * p2, int d2, int & dr){
    double *dr1 = new double[(max(d1, d1)+2)];
    for(int i=0;i<=max(d1, d2);i++){
        dr1[i] = p1[i]+p2[i];
    }
    dr = max(d1, d2);  // dr indicates the highest degree
    return dr1;
    delete dr1;
}


double * poli_product (double * p1, int d1, double * p2, int d2){
    int size = d1+d2;
    double * product = new double[size+1];

    for(int i=0; i<=d1+d2; i++){
       product[i] = 0;
    }
    for(int i=0; i<=d1; i++){
        for (int j=0; j<=d2; j++){
           product[i+j] += p1[i]*p2[j];
       }
     }
    return product;
}

int main(){
    double *p1;
    double *p2;
    int g1;
    int g2;
    double m;
    int dr;

    p1=read_poly(g1);
    print_poly(p1,g1);

    cout<<"********************************"<<endl;
    cout<<"please input an x: "<<endl;
    cin>>m;
    cout<<"the value is: "<<calculate_value(p1, g1, m)<<endl;

    cout<<"********************************"<<endl;
    cout<<"please input the information of the second poly: "<<endl;
    p2=read_poly(g2);
    print_poly(p2,g2);
    cout<<"the sum of two polys is: "<<endl;

    double *sum_index = poli_sum(p1, g1, p2, g2, dr);
    print_poly(sum_index, max(g1, g2));

    cout<<"********************************"<<endl;
    cout<<"the product result is:"<<endl;
    print_poly((poli_product (p1, g1, p2, g2)), g1+g2);

    delete[] p1;
    delete[] p2;
    delete[] sum_index;
    return 0;
}

#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int i,j,k;
    float f,c,a;
    while(cin  >> f){
        c = f*1.8+32;
        a = 273.15 + f;
        cout << fixed  <<  setprecision(2) << "Fahrenheit = " << c <<endl;
        cout << fixed  <<  setprecision(2)<< "Absolute temperature = " << a << endl;
    }
    return 0;
}

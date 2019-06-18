#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int i,j,k,m,n;
    float b,h,w;
    while(cin >> h >> w){
        h = h / 100;
        b = w /(h*h);
        if(b < 18.5){
            cout << fixed  <<  setprecision(1) << b << " underweight\n";
        }
        else if(18.5<= b && b < 24){
            cout << fixed  <<  setprecision(1) <<b << " normal\n";
        }
        else if(24<= b && b < 27){
            cout << fixed  <<  setprecision(1) <<b << " overweight\n";
        }
        else if(27<= b && b <30){
            cout << fixed  <<  setprecision(1) <<b << " mild obesity\n";
        }
        else if(30<= b && b <35){
            cout << b << " moderate obesity\n";
        }
        else cout << fixed  <<  setprecision(1) <<b << " severe obesity\n";
        //printf("%f%f\n",h,w);
    }
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i,j,k,m,n,sign;
    int a[10];
    while(cin >> a[0] >> a[1] >> a[2]){
        if(a[0] <= 0 || a[1] <= 0 || a[2] <= 0){
            cout << "invalid\n";
            continue;
        }
        sign = 0;
        if(a[0] + a[1] <= a[2])sign = 1;
        if(a[1] + a[2] <= a[0])sign = 1;
        if(a[0] + a[2] <= a[1])sign = 1;
        if(sign == 1){
            cout << "invalid\n";
            continue;
        }
        sort(a,a+3);
        if(a[0]*a[0] + a[1]*a[1] > a[2]*a[2])cout << "acute\n";
        if(a[0]*a[0] + a[1]*a[1] == a[2]*a[2])cout << "right\n";
        if(a[0]*a[0] + a[1]*a[1] < a[2]*a[2])cout <<"obtuse\n";

    }
    return 0;
}

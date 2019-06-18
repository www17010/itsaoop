#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    int a[13];
    a[0] = 1;
    a[1]= 1;
    for(i = 2;i <= 12;i++){
        a[i] = a[i - 1] * i;
    }
    cin >> k;
    while(k--){
        cin >> j;
        cout << a[j] << endl;
    }
    return 0;
}

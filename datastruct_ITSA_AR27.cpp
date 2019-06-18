#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
using namespace std;
int a[90000];
int main(){
    int i,j,k,n;
    while(cin >> n){
        for(i = 1;i <= n;i++)a[i] = 0;
        for(i = 1;i < n;i++){
            cin >> k;
            a[k] = 1;
        }
        for(i = 1;i <= n;i++){
            if(a[i] == 0)cout << i << endl;
        }
    }
    return 0;
}

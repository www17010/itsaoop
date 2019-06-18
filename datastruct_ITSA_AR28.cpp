#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
using namespace std;
int main(){
    int num,i,j,k,n;
    int a[6000];
    while(cin >> n){
        num = 0;
        for(i = 1;i <= n;i++){
            cin >> a[i];
        }
        for(i = 1;i < n;i++){
            for(j = i + 1;j <= n;j++){
                if(a[i] >2*a[j])num++;
            }
        }
        cout << num <<endl;
    }
    return 0;
}

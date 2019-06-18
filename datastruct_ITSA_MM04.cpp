//#include<stdio.h>
//#include<stdlib.h>
#include<iostream>
using namespace std;
int main(){
    long long i,j,m,n;
    int k,t;
    cin >> t;
    while(t--){
        cin >> m;
        n = 0;
        for(i = 1;i*i <= m;i++){
            if(i * i == m){
                n = n + i;
                break;
            }
            if(m % i==0){
                n = n + i;
                if(i != 1)n = n + (m/i);
            }

        }//printf("%lld %lld\n",n,m);
        if(n == m)cout << "perfect\n";
        else cout << "nonperfect\n";
    }
    return 0;
}

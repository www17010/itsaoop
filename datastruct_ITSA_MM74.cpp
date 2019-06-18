#include<iostream>
using namespace std;
int main(){
    int i,j,k,m,n;
    while(cin >> m >> n){
        k = 0;
        for(i = m;i <= n;i++){
            if(i % 2 != 0)k = k + i;
        }cout << k << endl;
    }
    return 0;
}

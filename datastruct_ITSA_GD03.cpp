#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i,j,k,m,n,t;
    int a[10000];
    while(cin >> n){
        for(i = 0;i < n;i++)cin >> a[i];
        sort(a,a+n);
        k = a[0];
        m = a[0];
        for(i = 1;i < n;i++){
            k = k + a[i-1] + a[i];
            m = m + k;
        }
        cout << m << endl;

    }
    return 0;
}

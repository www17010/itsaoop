#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i,j,k,m,n,t;
    int a[100000],b[100000];
    while(cin >> n){
        if(n == 0)break;
        for(i = 0;i < n;i++)cin >> a[i];
        for(i = 0;i < n;i++)cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);
        m=0;
        i = 0;j = 0;
        while(j < n){
            if(a[i]>=b[j]){
                j++;
            }
            else{
                i++;j++;m++;
            }
        }
        cout << m << endl;
    }
    return 0;
}

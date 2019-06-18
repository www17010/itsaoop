#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,i,j,k,m,n;
    int a[100000],b[100000];
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(i = 1;i <= n;i++)cin >>a[i];
        for(i = 1;i <= m;i++)cin >>b[i];

        sort(a+1,a+n+1);
        sort(b+1,b+m+1);

        i = 1;j = 1;k = 0;
        while(i <= n && j <= m){
            if(a[i] > b[j]){
                j++;
                continue;
            }
            else{
                i++;
                k = k+b[j];
                j++;
            }
        }
        if(i > n)cout << k << endl;
        else cout << "-1\n";
    }
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i,j,k,m,n,t;
    int d[10000],w[10000];
    cin >> t;
    while(t--){
        cin >> n;
        for(i = 0;i < n;i++)cin >> w[i];
        for(i = 0;i < n;i++)cin >> d[i];
        for(i = n-1;i > 0;i--){
            for(j = 0;j < i;j++){
                if(d[j] > d[j+1]){
                    k = w[j];
                    w[j] = w[j+1];
                    w[j+1] = k;
                    k = d[j];
                    d[j] = d[j+1];
                    d[j+1] = k;
                }
            }
        }
        k = 0;
        m = 0;
        for(i = 0;i < n;i++){
            m = m + w[i];
            if(m > d[i]){
                k = 1;
                break;
            }
        }
        if(k == 1)cout << "No\n";
        else cout <<"Yes\n";
    }
    return 0;
}

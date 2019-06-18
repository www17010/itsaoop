#include<iostream>
using namespace std;
int main(){
    int i,j,k,m,n,t,p,q;
    cin >> t;
    int a[200][200],b[200][200],c[200][200];
    while(t--){
        cin >> m >> n;
        for(i = 0;i < m;i++)for(j = 0;j < n;j++)cin >> a[i][j];
        for(i = 0;i < n;i++)for(j = 0;j < m;j++)cin >> b[i][j];
        for(i = 0;i < m;i++){
            for(j = 0;j < m;j++){
                p = 0;
                for(k = 0;k < n;k++){
                    p = p + a[i][k]*b[k][j];
                }
                c[i][j] = p;
            }
        }
        for(i = 0;i < m;i++){
            for(j = 0;j < m;j++){
                if(j == 0)cout << c[i][j];
                else cout << " " << c[i][j];
            }
            cout <<endl;
        }
        if(t != 0)cout << endl;
    }
    return 0;
}

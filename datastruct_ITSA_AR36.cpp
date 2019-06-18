#include<iostream>
//#include<stdlib.h>
using namespace std;
int main(){
    int i,j,k,m,n,c;
    int a[20][20],b[20][20],t[20][20],d[20][20];
    while(cin >> n >> m >> c){
        for(i = 0; i < n;i++)for(j = 0;j < m;j++)cin >> a[i][j];
        for(i = 0; i < n;i++)for(j = 0;j < m;j++)cin >> b[i][j];
        for(i = 0; i < n;i++){
            for(j = 0;j < m;j++){
                t[i][j] = c*(a[i][j] + b[i][j]);
            }
        }
        for(j = 0;j < m;j++){
            for(i = 0;i < n;i++){
                d[j][i] = t[i][j];
            }
        }
        for(i = 0;i < m;i++){
            for(j = 0;j < n;j++){
                if(j != n - 1)cout << d[i][j] << " ";
                else cout << d[i][j] << endl;
            }
        }
    }
    return 0;
}

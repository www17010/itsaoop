#include<iostream>
using namespace std;
int main(){
    int i,j,k,m,n,c,r;
    int a[100][100],b[100][100],d[100][100];
    while(cin >> r >> c){
        for(i = 0;i < r;i++){
            for(j = 0;j < c;j++){
                cin >> a[i][j];
            }
        }
        for(i = 0;i < r;i++){
            for(j = 0;j < c;j++){
                cin >> b[i][j];
            }
        }
        for(i = 0;i < r;i++){
            for(j = 0;j < c;j++){
                d[i][j] = a[i][j] + b[i][j];
            }
        }
        for(i = 0;i < r;i++){
            for(j = 0;j < c;j++){
                if(j == 0)cout << d[i][j];
                else cout << " " << d[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}

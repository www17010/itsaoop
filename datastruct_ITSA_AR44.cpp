#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i,j,k = 0,m,n,c,r;
    float a[100][100],b[100][100],d[100][100];
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
                d[i][j] = (a[i][j] + b[i][j])/2;
            }
        }
        if(k == 1)cout << endl;
        if(k == 0){
            k = 1;
        }
        for(i = 0;i < r;i++){
            for(j = 0;j < c;j++){

                cout << "[" << fixed  <<  setprecision(1) << d[i][j] << "]";
            }
            cout << endl;
        }
    }
    return 0;
}

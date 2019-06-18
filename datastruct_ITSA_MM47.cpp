#include<iostream>
using namespace std;
int main(){
    int i,j,k,m,n;
    while(cin >> m >> n){
        k = 0;
        k = k + m*n;
        cin >> m >> n;
        k = k + m*n;
        cin >> m >> n;
        k = k + m*n;
        cout << k << endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    char s[100000];
    int a[100000];
    int i,j,k,m,n;
    a[0] = 1;
    for(i = 1;i <= 10;i++){
        a[i] = a[i-1]*2;
    }
    cin >> n;
    while(n--){
        cin >> m;
        cout << a[m] << endl;
    }
    return 0;
}

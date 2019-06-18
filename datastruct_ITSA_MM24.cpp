#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    while(cin >> i >> j){
        if(j-i>= 0)cout << j-i << endl;
        else cout  << i-j << endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int m,j,k,i;
    long long n;
    while(cin >> n){
        while(1){
            if(n % 2 == 0)n = n/2;
            else if(n % 3 == 0)n = n/3;
            else if(n % 5 == 0)n = n/5;
            else break;
        }
        if(n == 1)cout <<"Regular number!" << endl;
        else if(n == 0)cout << "Regular number!" << endl;
        else cout <<"Irregular number!" << endl;
    }
    return 0;
}

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    int i,j,k,m,n;
    string a,b,tmp;
    while(cin >> a >>b){
        n = 0;
        for(i = 0;i < 6;i++){
            tmp = tmp.assign(b,i,2);
            if(tmp == a)n++;
        }
        cout << n <<endl;
    }
    return 0;
}

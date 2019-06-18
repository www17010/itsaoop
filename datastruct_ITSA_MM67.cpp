#include<iostream>
using namespace std;
int main(){
    int i,j,k,m,n,t;
    cin >> t;
    while(t--){
        cin >> m;
        if(m == 1){
            cout << "1\n";
            continue;
        }
        n = 0;
        while(m != 1){
            if(m % 2==0){
                m = m/2;
                n++;
            }
            else{
                m = 3*m+1;
                n++;
            }
        }
        cout << n << endl;
    }
    return 0;
}

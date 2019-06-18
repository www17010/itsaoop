#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,m;
    int a[100][100];
    while(cin >> n){
        if(n > 12){
            cout << "The total number of inputs is not a squared number." << endl;
        }
        else{
            m = 0;
            for(i = 0;i < n;i++){
                for(j = 0;j < n;j++){
                    cin >> k;
                    if(i == j){
                        m = m + k;
                    }
                }
            }
            cout << m << endl;
        }
    }
    return 0;
}

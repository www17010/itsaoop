#include<iostream>
using namespace std;
int main(){
    int i,j,k,t;
    int a[1000];
    while(cin >> t){
        for(i = 0;i < t;i++)cin >> a[i];
        for(i = t-1;i > 0;i--){
            for(j = 0;j < i;j++){
                if(a[j] < a[j+1]){
                    k = a[j];
                    a[j] = a[j+1];
                    a[j+1] = k;
                }
            }
        }
        for(i = 0;i < t;i++){
            cout << i+1 << " " << a[i] << endl;
        }
    }
    return 0;
}

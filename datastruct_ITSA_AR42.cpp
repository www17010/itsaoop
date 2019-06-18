#include<iostream>
using namespace std;
int main(){
    int i,j,k,min,max;

    while(cin >> k){
        min = k;max = k;
        for(i = 0;i < 9;i++){
            cin >> k;
            if(k > max)max = k;
            if(k < min)min = k;
        }
        cout << "Largest number = " << max <<endl;
        cout <<"Smallest number = " << min << endl;
    }

    return 0;
}




#include<iostream>
#include<cstring>
#include<cstdlib>
#include<istream>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    int i,k,m,n,j,max;
    int a[100000],b[100000];
    string c;
    while(getline(cin,c)){
        for(i = 0;i < 100000;i++)a[i]= 0;
        j = 0;n = 0;
        for(i = 0;c[i] != '\0';){
            if(c[i] == ' '){
                k = atoi(c.c_str()+j);
                a[k]++;
                j = i;
                n++;
                //printf("%d i = %d\n",k,i);
                i++;
                continue;
            }
            i++;
        }
        max = -1;
        for(i = 0;i < 100000;i++){
            if(a[i] > max){
                max = a[i];
                j = i;
            }
        }
        if(max < n/2)cout << "No Majority\n";
        else cout << "Majority is " << j << endl;
    }
    return 0;
}

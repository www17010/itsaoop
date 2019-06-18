
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<istream>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    int i,j,k,m,n,a[100];
    string s;
    while(getline(cin,s)){
        n = 0;j=0;
        for(i = 0;s[i] != '\0';){
            if(s[i] == ' '){
                k = atoi(s.c_str()+j);
                j = i;
                a[n] = k;
                n++;
                i++;
                continue;
            }
            i++;
        }
        k = atoi(s.c_str()+j);
        a[n] = k;
        n++;
        m = 1;k = 1;
        for(i = 0;i < n-1;i++){
            if(a[i] == a[i+1]){
                k++;
            }
            else{
                if(k > m)m = k;
                k = 1;
            }
        }if(k > m)m = k;
        cout << m << endl;
    }
    return 0;
}

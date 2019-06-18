#include<iostream>
#include<cstring>
#include<cstdlib>
#include<istream>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    int i,j,k,m;
    int a[10000];
    string s;
    while(getline(cin,s)){
        m = 0;j = 0;
        for(i = 0;s[i] != '\0';){
            if(s[i] == ' '){
                k = atoi(s.c_str()+j);
                //printf("k = %d\n",k);
                j = i;
                if(m < k)m = k;
                i++;
                continue;
            }
            i++;
        }
        k = atoi(s.c_str()+j);
        if(m < k)m = k;
        j = i;
        //printf("k = %d--\n",k);
        cout << m <<endl;
    }
    return 0;
}

#include<iostream>
//#include<stdio.h>
#include<cstring>
#include<vector>
#include<cctype>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<istream>
#include<cstdio>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    int i,j,k,m,n;
    int a[10000];
    string s;
    while(getline(cin,s)){
        n = 1;j = 0;
        for(i = 0;s[i] != '\0';){
            if(s[i] == ' '){
                k = atoi(s.c_str()+j);
                a[n] = k;
                j = i;
                n++;
                //printf("%d i = %d\n",k,i);
                i++;
                continue;
            }
            i++;//printf("test\n");
        }//printf("n = %d\n",n);
        k = atoi(s.c_str()+j);
        a[n] = k;
        j = i;
        n++;
        sort(a,a+n);
        n = n -1;
        if(n % 2 == 0){
            k = a[n/2] + a[(n/2)+1];
            //for(i = 1;i < n;i++)printf("%d ",a[i]);
           // printf("\n");
            //printf("k = %d\n",k);
            if(k % 2 == 0)cout << "Median=" << k/2 << endl;
            else cout << "Median=" << k/2 << ".5\n";
        }
        else {
            cout << "Median=" << a[(n/2)+1] << endl;
            //for(i = 1;i < n;i++)printf("%d ",a[i]);
            //printf("\n");
            //printf("k = %d\n",k);
        }
    }
    return 0;
}

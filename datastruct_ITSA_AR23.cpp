#include<iostream>
//#include<stdio.h>
#include<cstring>
#include<vector>
#include<cctype>
#include<cstdio>
using namespace std;
int main(){
    int i,j,k;
    string s;
    string u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string l = "NOPQRSTUVWXYZABCDEFGHIJKLM";
    while(getline(cin,s)){
        for(i = 0;i < s.length();i++){
            if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')){
                for(j = 0;j < 26;j++){
                    if(s[i] == u[j] || s[i] == tolower(u[j])){
                        if(islower(s[i])){
                             putchar(tolower(l[j]));
                        }
                        else cout << l[j];
                    break;
                    }
                    if(s[i] == l[j] || s[i] == tolower(l[j])){
                        if(islower(s[i])){
                            putchar(tolower(u[j]));
                        }
                        else cout << u[j];
                    break;
                    }

                }
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}

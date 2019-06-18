#include<iostream>
#include<cstring>

#include<cstdlib>
#include<istream>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    int i,j,k,m,n;
    string s;

    while(getline(cin,s)){
        for(i = 0;s[i] != '\0';i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                k = (int)s[i] - (int)'a';
                cout << char((int)'Z'-k);
            }
            else if(s[i] >= 'A' && s[i] <= 'Z'){
                k = (int)s[i] - (int)'A';
                cout << char((int)'z'-k);
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                if(s[i] == '9')cout << "0";
                else cout << char((int)s[i]+1);
            }
            else cout << s[i];
        }cout << endl;
    }
    return 0;
}

#include<iostream>

using namespace std;
int main(){
    int i,j,k,t,m,n,b_num,g_num;

    while(cin >> m >> n){
        ios_base::sync_with_stdio(false);
        b_num = 0;
        g_num = 0;
        k = m*n;
        for(i = 1;i <= m;i++){
                for(j = 1;j <= n;j++){
                    cin >> t;
                    if(t == 0)g_num++;
                    else b_num++;
                }
        }
        if(g_num > b_num) cout <<"0" <<endl;
        else if(g_num < b_num)cout <<"1" << endl;
        else cout << "2"<<endl;
    }
    return 0;
}

#include<iostream>
//#include<stdlib.h>
using namespace std;
int main(){
    int i,j,k,m,n;
    int maze[20][20],dis[20][20];

    while(cin >> m >> n){
        for(i = 0;i <= m + 1;i++){
            for(j = 0;j <= n + 1;j++){
                maze[i][j] = -1;
            }
        }
        for(i = 1;i <= m;i++){
            for(j = 1;j <= n;j++){
                cin >> maze[i][j];
            }
        }
        dis[1][1] = maze[1][1];
        for(i = 2;i <= m;i++){
            dis[i][1] = dis[i - 1][1] + maze[i][1];
        }
        for(i = 2;i <= n;i++){
            dis[1][i] = dis[1][i - 1] + maze[1][i];
        }
        for(i = 2;i <= m;i++){
            for(j = 2;j <= n;j++){
                if(dis[i - 1][j] <= dis[i][j - 1]){
                    dis[i][j] = dis[i - 1][j] + maze[i][j];
                }
                else{
                    dis[i][j] = dis[i][j - 1] + maze[i][j];
                }
            }
        }
        cout << dis[m][n] << endl;
    }
    return 0;
}

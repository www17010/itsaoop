#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    float m;
    int a[100];
    while(cin >> m){
        m = m * 3.7119;
        //if(m >9999)n = n+1;

        n = (int)m;
        //printf("n=%d\n",n);
        for(i = 0;i < 10;i++)a[i] = 0;
        while(n > 0){
            if(n >= 10000){
                a[9] = a[9] +(n/10000);
                n = n % 10000;
                //printf("n=%d\n",n);
            }
            else if(n >= 5000){
                a[8] = a[8] +(n/5000);
                n = n % 5000;
                //printf("n=%d\n",n);
            }
            else if(n >= 2000){
                a[7] = a[7] +(n/2000);
                n = n % 2000;
               // printf("n=%d\n",n);
            }
            else if(n >= 1000){
                a[6] = a[6] +(n/1000);
                n = n % 1000;
                //printf("n=%d\n",n);
            }
            else if(n >= 500){
                a[5]= a[5] +(n/500);
                n = n % 500;
                //printf("n=%d\n",n);
            }
            else if(n >= 100){
                a[4] = a[4] +(n/100);
                n = n % 100;
                //printf("n=%d\n",n);
            }
            else if(n >= 50){
                a[3] = a[3] +(n/50);
                n = n % 50;
                //printf("n=%d\n",n);
            }
            else if(n >= 10){
                a[2] = a[2] +(n/10);
                n = n % 10;
                //printf("n=%d\n",n);
            }
            else if(n >= 5){
                a[1] = a[1] +(n/5);
                n = n % 5;
                //printf("n=%d\n",n);
            }
            else if(n >= 1){
                a[0] = a[0] +(n/1);
                n = n % 1;
                //printf("n=%d\n",n);
                break;
            }
            else break;
        }
        for(i = 0;i < 10;i++){
            if(i == 9)cout << a[9] << endl;
            else cout << a[i] << " ";
        }
    }
    return 0;
}

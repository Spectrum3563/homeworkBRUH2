#include <iostream>
using namespace std;
#define n 200

int coin[3] = {1, 2, 5};
int ways[n+1]={0};
int i, j;
void way(){
    for(i=0;i<=n;i++){
        ways[i]=0;
    }
    ways[0]=1;
    for(i=0;i<3;i++){
        for(j=0;j<=n;j++){
            if(coin[i] <= j){
                ways[j] += ways[ ( j - coin[i] ) ] ;
            }
        }
    }
    cout << ways[n];return;
}

int main(){
    way();
}

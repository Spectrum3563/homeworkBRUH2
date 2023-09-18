#include<iostream>
using namespace std;
#define nl cout<<"\n";
const int mx = 1000000;
int fib[mx];

void fibmax(int n){
	nl
	if(n==1){
		cout << 1;return;
	}else if(n==0){
		cout << 0;return;
	}
	fib[0]=0;
	fib[1]=1;
	int ind=1;
	while(fib[ind]<=n){
		cout << fib[ind++] << " ";
		fib[ind]=fib[ind-1]+fib[ind-2];
	}
	nl
	return;
}

int main(){
	int a;cout << "Nhap so nguyen max: ";cin >> a;
	fibmax(a);
}

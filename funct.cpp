#include <bits/stdc++.h>

using namespace std;

void showInfo(){
	cout << "Ten: Tran Ba Quan\nTuoi: 15\nDia chi: Khong nho\nEmail: tbq2107@gmail.com\n";
	cout << "Sdt: 0335467098\n";return;
}

void showMessage(int non_sense){
	cout << "Hello msg\n";return;
}

long long int Factorial(int n){
	long long int f=1;
	for(int i=2;i<=n;i++){
		f*=i;
	}
	return f;
}

long long int sum(int n){
	if(n>=0){
		return n*(n+1)/2;
	}else{
		return -n*(n-1)/2+1;
	}
}

bool compare(long long int a, long long int b){
	return a>b;
}

int main(){
	showInfo();
	showMessage(69);showMessage(96);
	showMessage(1369);
	cout << Factorial(5);
	cout << "\n" << sum(10) << "\n";
	if(compare(sum(10), Factorial(5))){
		cout << "sum 10 > Factorial 5";
	}else{
		cout << "sum 10 < Factorial 5";
	}
}



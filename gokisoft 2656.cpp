#include <iostream>
using namespace std;
int main(){
	cout << "Nhap so nguyen n: ";
	int n;cin >> n;
	cout << "Tong cac so tu 1 toi n: ";
	if(n>=0){
		cout << (n*(n+1))/2;
	}else{
		cout << -(n*(n-1))/2+1;
	}
	cout << "\nNhap so nguyen n: ";
	cin >> n;
	cout << "Tat ca cac uoc so nguyen duong cua n: \n";
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout << i << " ";
		}
	}
	cout << "\nNhap so nguyen num: ";
	cin >> n;
	cout << "Bang cuu chuong cua num: \n";
	for(int i=1;i<=10;i++){
		cout << i << " * " << n << " = " << i*n << "\n";
	}
}

#include <iostream>
using namespace std;

int main(){
	cout << "Nhap vao so n: ";
	int n;cin >> n;
	cout << "\nNhap vao mang gom n so nguyen: ";
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<(int)n/2;i++){
		a[i]=a[n-i-1];
	}
	cout << "\nMang dao nguoc la: ";
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	return 0; 
}

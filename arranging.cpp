#include <bits/stdc++.h>

using namespace std;

int main(){
	cout << "Nhap so n: ";
	int n;cin >> n;int t[n];
	cout << "\nNhap mang t gom n so: ";
	for(int i=0;i<n;i++){
		cin >> t[i];
	}
	n=sizeof(t)/sizeof(t[0]);
	sort(t, t+n);
	cout << "\nMang t sau khi duoc sap xep: ";
	for(int i=0;i<n;i++){
		cout << t[n-i-1] << " ";
	}
}

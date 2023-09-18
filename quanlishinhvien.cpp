#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
	int n;string temp="";
	cout << "1. Nhap thong tin sinh vien\n2. Hien thi thong tin sinh vien\n3. Ket thuc chuong trinh\n";
	cout << "Chon 1, 2, 3: ";cin >> n;cin.ignore();
	while(n!=3){
		if(n==1){
			getline(cin, temp);
		}else if(n==2){
			cout << temp << "\n";
		}
		cout << "1. Nhap thong tin sinh vien\n2. Hien thi thong tin sinh vien\n3. Ket thuc chuong trinh\n";
		cout << "Chon 1, 2, 3: ";cin >> n;
		cin.ignore();
	}
	
}

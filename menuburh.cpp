#include<bits/stdc++.h>
using namespace std;

void menu(){
	cout << "1. Nhap n so nguyen\n";
	cout << "2. Hien thi mang\n";
	cout << "3. Tinh tong cac phan tu cua mang\n";
	cout << "4. Sap xep mang tang dan\n";
	cout << "5. Thoat\nVui long chon: ";
}
int main(){
	int c, n, ind=0, sum=0;
	int tmp[100000000];
	int* t=tmp;
	menu();
	for(;;){
		cin >> c;
		if(c==5){
			break;
		}else if(c==1){
			cout << "\nNhap so n: ";cin >> n;
			ind+=n;
			cout << "\nNhap n so nguyen: ";
			for(int i=0;i<n;i++){
				cin >> t[i];sum+=t[i];
			}
		}else if(c==2){
			cout << "\nMang: ";
			for(int i=0;i<ind;i++){
				cout << t[ind] << " ";
			}
			cout << "\n";
		}else if(c==3){
			cout << "\nTong phan tu cua mang: " << sum;
		}else if(c==4){
			sort(t, t+ind-1);
		}
		cout << "\n1. Nhap n so nguyen\n";
		cout << "2. Hien thi mang\n";
		cout << "3. Tinh tong cac phan tu cua mang\n";
		cout << "4. Sap xep mang tang dan\n";
		cout << "5. Thoat\nVui long chon: ";
	}
}

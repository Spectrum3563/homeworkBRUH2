#include <bits/stdc++.h>
using namespace std;
int dataList[100];
int ind=0;

void delE(int x){
	for(int i=0;i<ind;i++){
		if(dataList[i]==x){
			for(int j=i;j<ind;j++){
				dataList[j]=dataList[j+1];
			}
			ind--;i--;
		}
	}
}

int findE(int x){
	int temp=0;
	for(int i=0;i<ind;i++){
		if(dataList[i]==x){
			temp++;
		}
	}
	return temp;
}

int main(){
	int p, x;
	while(p!=6){
		cout << "1. Them so vao mang dataList\n";
		cout << "2. Sap xep theo thu tu tang dan\n";
		cout << "3. Tim phan tu trong mang\n";
		cout << "4. Xoa phan tu trong mang\n";
		cout << "5. Hien thi\n6. Thoat\n";
		cin >> p;
		if(p==6){
			break;
		}else if(p==1){
			cout << "\nNhap so can them vao mang: ";
			cin >> dataList[ind++];
		}else if(p==4){
			cout << "\nNhap so can xoa: ";
			cin >> x;
			delE(x);
		}else if(p==2){
			ind--;
			sort(dataList, dataList+ind);
			ind++;
			cout << "\nMang sau khi sap xep theo thu tu tang dan: ";
			for(int i=0;i<ind;i++){
				cout << dataList[i] << " ";
			}
			cout << "\n";
		}else if(p==3){
			cout << "\nNhap so can tim: ";
			cin >> x;
			cout << "\nSo so can tim la: " << findE(x) << "\n";
		}else if(p==5){
			cout << "\nDanh sach cac phan tu: ";
			for(int i=0;i<ind;i++){
				cout << dataList[i] << " ";
			}
			cout << "\n";
		}
	}
}

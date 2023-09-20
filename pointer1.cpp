#include <bits/stdc++.h>

using namespace std;
int main(){
	int *p;
	int ans=0;
	p = (int *) malloc (10 * sizeof(int));
	for(int i=0;i<10;i++){
		cout << "p[" << i << "] = ";
		cin >> p[i];
		if(p[i]%2==0){
			ans+=p[i];
		}
	}
	cout << "\nTong cac so chia het cho 2 la: " << ans;
}

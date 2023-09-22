#include <bits/stdc++.h>

using namespace std;

float tg(float a, float b){
	return a+b;
}

float h(float a, float b){
	return a-b;
}

float th(float a, float b){
	return a*b;
}

float dv(float a, float b){
	return a/b;
}

int main(){
	float a, b;cin >> a >> b;
	cout << tg(a, b) << "\n" << h(a, b) << "\n" << th(a, b) << "\n" << dv(a, b);
}

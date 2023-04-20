#include<iostream>

using namespace std;

int main(){
	int n, m, min;
	cin >> n >> m;
	if(n>m){
		min = m;
	}
	else{
		min = n;
	}
	if(min%2==0){
		cout << "Malvika" << endl;
	}
	else{
		cout << "Akshat" << endl;
	}
	return 0;
}

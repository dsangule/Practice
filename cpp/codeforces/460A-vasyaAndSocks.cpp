#include<iostream>

using namespace std;

int main(){

	int n,m;
	cin >> n >> m;
	int t = n;
	do{
		t = t+(n/m);
		n = (n%m)+(n/m);
	}while(n/m!=0);
	cout << t << endl;

	return 0;
}

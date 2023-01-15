#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int t; cin >> t;
	for(int i=0; i<t; i++){
		int n; cin >> n;
		int m = 1;
		for(int j=1; j<n; j++){
			m = m + (pow(2,j));
			if(n%m == 0){
				cout << n/m << endl;
				break;
			}
		}
	}

	return 0;
}

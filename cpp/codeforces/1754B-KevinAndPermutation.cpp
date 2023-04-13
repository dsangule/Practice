#include<iostream>

using namespace std;

int main(){

	int t; cin >> t;

	for(int i = 0; i<t; i++){
		int n; cin >> n;
		int A[n];
		int x = 1;
		for(int j=1; j<=n; j++){
			if(j%2==0){
				A[j-1] = x;
				x++;
			}
		}
		for(int j=1; j<=n; j++){
			if(j%2!=0){
				A[j-1] = x;
				x++;
			}
		}
		for(int j=0; j<n; j++){
			cout << A[j] << " ";
		}
		cout << endl;
	}

	return 0;
}

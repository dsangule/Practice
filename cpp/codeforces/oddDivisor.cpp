#include<iostream>

using namespace std;

int main(){
	
	int t; cin >> t;
	
	for(int i=0; i<t; i++){
		long long int n; cin >> n;
		
		while(n%2==0){
			n = n/2;
		}
		if(n==1){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
		
	}
	
	return 0;
}

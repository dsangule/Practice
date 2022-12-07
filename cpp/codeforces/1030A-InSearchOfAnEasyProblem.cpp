#include<iostream>

using namespace std;

int main(){

	int n; cin >> n;
	bool ans = false;
	for(int i=0; i<n; i++){
		int num; cin >> num;
		if(num==1){
			ans = true;
		}
	}
	if(ans){cout << "Hard" << endl;}
	else{cout << "Easy" << endl;}

	return 0;
}

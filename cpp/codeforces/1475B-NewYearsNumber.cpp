#include<iostream>
using namespace std;
int main(){
	int t; cin >> t;
	for(int i=0; i<t; i++){
		int n; cin >> n;
		int temp = 0, count = 0;
		while((temp+2020)<=n){
			count ++;
			temp = 2020 * count;
		}
		if(n>=temp&&n<=(temp+count)){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}

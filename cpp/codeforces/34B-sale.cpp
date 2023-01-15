#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n, m; cin >> n >> m;
	int A[n];
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	sort(A, A+n);
	int sum = 0;
	int i = 0;
	while(i<m&&A[i]<0){
		sum -= A[i];
		i++;
	}
	cout << sum;
	return 0;
}

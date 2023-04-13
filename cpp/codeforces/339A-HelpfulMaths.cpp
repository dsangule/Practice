#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	string s; cin >> s;
	int j=0;
	char A[(s.length()+1)/2];
	for(int i=0; i<s.length(); i+=2){
		A[j] = s[i];
		j++;
	}

	sort(A, A+j);

	for(int i=0; i<j-1; i++){
		cout << A[i] << "+";
	}
	
	cout << A[j-1] << endl;

	return 0;
}

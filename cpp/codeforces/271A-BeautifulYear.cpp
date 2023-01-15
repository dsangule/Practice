#include<iostream>

using namespace std;

int main(){
	int num; cin >> num;
	int n = num;
	int A[4];
	do{
		num++;
		n = num;
		for(int i = 0; i < 4; i++){
			A[3-i] = n%10;
			n = n/10;
		}
	}while((A[0]==A[1])||(A[0]==A[2])||(A[0]==A[3])||(A[1]==A[2])||(A[1]==A[3])||(A[2]==A[3]));	
	cout << num;
	return 0;
}

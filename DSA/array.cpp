#include<iostream>

using namespace std;

class Array{
	public:
		int *A;
		int size;
		int length;

	void display(){
		cout << "[ ";
		for(int i=0; i<length; i++){
			cout << A[i] << " ";
		}
		cout << "]" << endl;
	}

	void append(int num){
		A[length] = num;
		length++;
	}
	
	void insert(int num, int pos){
		for(int i=length; i>pos; i--){
			A[i] = A[i-1];
		}
		A[pos] = num;
		length++;
	}
	
	void del(int pos){
		for(int i = pos; i < length-1; i++){
			A[i] = A[i+1];
		}
		length--;
	}
};

int main(){
	
	Array arr;
	cout << "Enter size of Array: " << endl;
	cin >> arr.size;
	arr.A = new int[arr.size];
	arr.length = 0;
	
	int n;
	cout << "Enter number of elements: " << endl;
	cin >> n;
	arr.length = n;
	
	cout << "Enter all the elements: " << endl;
	for (int i=0; i<n; i++){
		cin >> arr.A[i];
	}
	
	arr.display();
	
	cout << "Enter a number to append: " << endl;
	int ap; cin >> ap;

	arr.append(ap);
	arr.display();

	cout << "Enter a number to insert: " << endl;
	int ins; cin >> ins;

	cout << "Enter a position for number to be inserted: " << endl;
	int ins_pos; cin >> ins_pos;

	arr.insert(ins, ins_pos);
	arr.display();

	cout << "Enter a position for number to be deleted: " << endl;
	int del_num; cin >> del_num;
	
	arr.del(del_num);
	arr.display();

	return 0;
}

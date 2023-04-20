#include<iostream>
#include<string>

using namespace std;

int main(){
    string student[12];
    cout << "Enter names of 12 students: \n";
    for(int i=0; i<12; i++){
        cin >> student[i];
    }
    for(int i=0; i<10; i++){
        cout << student[i] << "\n";
    }
    return 0;
}
#include<iostream>
#include<string>

using namespace std;

int main(){
    string student[12] = {"student1","student2","student3","student4","student5","student6","student7","student8","student9","student10"};
    for(int i=0; i<10; i++){
        cout << student[i] << "\n";
    }
    return 0;
}
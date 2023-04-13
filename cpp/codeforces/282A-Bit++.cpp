#include<iostream>

using namespace std;

int main(){
    int num = 0;

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s=="X++" || s=="++X"){
            num++;
        }
        else{
            num--;
        }
    }
    cout << num << endl;

    return 0;
}
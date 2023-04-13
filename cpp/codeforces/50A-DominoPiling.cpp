#include<iostream>

using namespace std;

int main(){

    int m, n; cin >> m >> n;
    int a = m*n;

    if (a%2==0){
        cout << a/2 << endl;
    }
    else{
        cout << (a-1)/2 << endl;
    }

    return 0;
}
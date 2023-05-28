#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){

    int n; cin >> n;
    string A; cin >> A;
    int count0 = 0, count1 = 0;
    for(int i=0; i<n; i++){
        if(A[i] == '1'){
            count1++;
        }
        else{
            count0++;
        }
    }

    cout << abs(count1-count0);

    return 0;
}
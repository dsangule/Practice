#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int A[5][5];
    int ans=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> A[i][j];
            if(A[i][j]==1){
                cout << abs(2-i)+abs(2-j) << endl;
            }
        }
    }

    return 0;
}
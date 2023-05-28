#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int k; cin >> k;
    int A[12];

    for(int i=0; i<12; i++){
        cin >> A[i];
    }

    sort(A, A+12);

    int ans = 0, sum = 0, it = 11;
    while(sum < k){
        sum += A[it];
        ans++;
        it--;
        if(it < -1){
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;

    return 0;
}
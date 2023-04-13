#include<iostream>

using namespace std;

int main(){

    int n, k; 
    cin >> n >> k;

    int A[n];
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    
    int j=0, ans = 0;
    while(A[j] >= A[k-1] && j < n && A[j] != 0){
        ans++;
        j++;
    }
    cout << ans << endl;

    return 0;

}
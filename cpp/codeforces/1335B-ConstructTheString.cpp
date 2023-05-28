#include <iostream>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        char ans[n];
        int it=0;

        while(it<n){
            int tempA = a;
            while(tempA){
                for(int j=0; j<b; j++){
                    if(it>=n)break;
                    ans[it] = (char)(97+j);
                    it++;
                }
                tempA--;
            }
        }

        for(int i=0; i<n; i++){
            cout << ans[i];
        }
        cout << "\n";

    }

    return 0;
}
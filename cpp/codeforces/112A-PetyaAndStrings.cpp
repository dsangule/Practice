#include<iostream>

using namespace std;

int main(){

    string s1, s2;
    cin >> s1 >> s2;

    for(int i=0; i<s1.size(); i++){
        if (s1[i] >= 'A' && s1[i] <= 'Z'){
            s1[i] = (char)(s1[i] + 'a'-'A');
        }
        if (s2[i] >= 'A' && s2[i] <= 'Z'){
            s2[i] = (char)(s2[i] + 'a'-'A');
        }
    }

    int ans = 0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i] < s2[i]){
            ans = -1;
            break;
        }
        else if(s1[i] > s2[i]){
            ans = 1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
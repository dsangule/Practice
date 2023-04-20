#include<iostream>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int stringSize = s.size();
        if(stringSize > 10){
            cout << s[0] << stringSize-2 << s[stringSize-1] << endl;
        }
        else{
            cout << s << endl;
        }
    }

    return 0;
}
#include<iostream>

using namespace std;

int main(){

    string s; cin >> s;
    char arr[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y'};

    string ans = "";
    for(auto i : s){
        bool flag = false;
        for(auto j : arr){
            if(i==j){
                flag = true;
            }
        }
        if(flag){}
        else{
            char temp = i;
            if(i < 97){
                temp = (char)(i+32);
            }
            ans = ans + "." + temp;
        }
    }

    cout << ans << endl;

    return 0;
}
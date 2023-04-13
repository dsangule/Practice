#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    string s; cin >> s;
    int string_length = s.size();

    char str[string_length];
    for(int i=0; i<string_length; i++){
        str[i] = s[i];
    }

    sort(str, str+string_length);

    int dist_char = 1;
    for(int i=1; i<string_length; i++){
        if(str[i] != str[i-1]){
            dist_char++;
        }
    }

    if(dist_char%2==0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
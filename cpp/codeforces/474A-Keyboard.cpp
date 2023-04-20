#include <iostream>

using namespace std;

int main(){

    char A[3][10] = 
    {
        {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
        {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'},
        {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}
    };

    char LorR; cin >> LorR;
    string s; cin >> s;

    if(LorR=='L'){
        for(int i=0; i<s.size(); i++){
            int x=0, y=0;
            for(int j=0; j<3; j++){
                for(int k=0; k<10; k++){
                    if(s[i]==A[j][k]){
                        x=j;
                        y=k;
                        j=10;
                        break;
                    }
                }
            }
            s[i]=A[x][y+1];
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            int x=0, y=0;
            for(int j=0; j<3; j++){
                for(int k=0; k<10; k++){
                    if(s[i]==A[j][k]){
                        x=j;
                        y=k;
                        j=10;
                        break;
                    }
                }
            }
            s[i]=A[x][y-1];
        }
    }

    cout << s << endl;

    return 0;
}
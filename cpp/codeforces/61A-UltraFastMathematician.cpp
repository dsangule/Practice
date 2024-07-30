#include <iostream>
using namespace std;

int main() {
    string n1, n2;
    cin >> n1 >> n2;
    string res = "";
    for (int i=0; i<n1.size(); i++) {
        if (n1[i] == n2[i]) {
            res = res + "0";
        } else {
            res = res + "1";
        }
    }
    cout << res << "\n";
}
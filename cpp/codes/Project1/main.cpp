#include <iostream>

using namespace std;

int main(){
    
    int rupees {0};
    cout << "Enter Price in rupees: ";
    cin >> rupees;
    
    cout << "Rs. 2000 notes: " << rupees/2000 << endl;
    rupees %= 2000;
    cout << "Rs. 500 notes: " << rupees/500 << endl;
    rupees %= 500;
    cout << "Rs. 200 notes: " << rupees/200 << endl;
    rupees %= 200;
    cout << "Rs. 100 notes: " << rupees/100 << endl;
    rupees %= 100;
    cout << "Rs. 50 notes: " << rupees/50 << endl;
    rupees %= 50;
    cout << "Rs. 20 notes: " << rupees/20 << endl;
    rupees %= 20;
    cout << "Rs. 10 notes: " << rupees/10 << endl;
    rupees %= 10;
    cout << "Rs. 5 coins: " << rupees/5 << endl;
    rupees %= 5;
    cout << "Rs. 2 coins: " << rupees/2 << endl;
    rupees %= 2;
    cout << "Rs. 1 coins: " << rupees/1 << endl;
    
    return 0;
}
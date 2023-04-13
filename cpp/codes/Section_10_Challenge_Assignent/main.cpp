#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string letter;
    
    cout << "Enter a string to create letter pyramid of: ";
    cin >> letter;
    
    for(size_t center = 0; center < letter.size(); center++){
        size_t spaces = letter.size() - center - 1;
        while(spaces > 0){
            cout << " ";
            spaces--;
        }
        for(size_t i = 0; i<center ; i++){
            cout << letter[i];
        }
        cout << letter[center];
        for(size_t i = 0; i<center ; i++){
            cout << letter[center-i-1];
        }
        cout << endl;
        
        
    }
    
    return 0;
}
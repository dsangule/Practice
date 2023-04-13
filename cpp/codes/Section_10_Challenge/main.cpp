#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string message{};
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLNOPQRSTUVWXYZ 1234567890"};
    string key {"mnopqrstuvwxyzABCDEFGHIJKLNOPQRSTUVWXYZabcdefghijkl 4567890123"};
    
    cout << "Enter a message to encrypt: " << endl;
    getline(cin, message);
    
    string encrypted[message.length()], decrypted[message.length()];
    
    cout << "\nEncrypting...\n" << endl;
    
    for(size_t i=0; i<message.length(); i++){
        int temp = alphabet.find(message[i]);
        encrypted[i] = key[temp];
    }
    
    cout << "Encrypted Message: ";
    
    for(auto i : encrypted){
        cout << i;
    }
    
    cout << "\n\nDecrypting...\n";
    
    for(size_t i=0; i<message.length(); i++){
        int temp = key.find(encrypted[i]);
        decrypted[i] = alphabet[temp];
    }
    
    cout << "Decrypted Message: ";
    
    for(auto i : decrypted){
        cout << i;
    }
    
    return 0;
}
#include <iostream>

using namespace std;

class Term{
    public:
    int coeff;
    int exp;
};

class Poly{
    int n;
    Term *terms;

    public:
    void create(){
        cout << "No. of Terms: ";
        cin >> n;
        terms = new Term[n];
        cout << "Enter Coefficients and Exponents for " << n << " terms:\n";
        for(int i=0; i<n; i++){
            cout << "Term " << n+1 << ":\n";
            cout << "Coefficient: ";
            cin >> terms->coeff;
            cout << "Exponent: ";
            cin >> terms->exp;
        }
    } 

    void display(){
        cout << "Polynomial: \n";
        for(int i=0; i<n; i++){
            cout << terms->coeff << " x ^ " << terms->exp;
            if(i!=n-1){
                cout << " + ";
            }
        }
        cout << "\n";
    }
};

int main(){

    Poly p1;
    p1.create();
    p1.display();

    return 0;
}
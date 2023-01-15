#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display_menu();
char get_selection();
void case_P(const vector<int>&);
void case_A(vector<int>&);
void case_M(const vector<int>);
void case_S(const vector<int>);
void case_L(const vector<int>);
void case_Q();

int main(){
    
    char choice;
    vector<int> vec{};
    
    do{
        display_menu();
        choice = get_selection();
        cout << "------------------------------------" << endl;
        
        switch(choice){

            case 'P':
                case_P(vec);
                break;

            case 'A':
                case_A(vec);
                break;
                
            case 'M':
                case_M(vec);
                break;
            
            case 'S':
                case_S(vec);
                break;
            
            case 'L':
                case_L(vec);
                break;
            
            case 'Q':
                case_Q();
                break;
                
            default:
                cout << "Unknown selection, please try again" << endl;
        }
        
        cout << "------------------------------------" << endl;
        
    }while(choice!='Q');
    
    
    return 0;
}


void display_menu(){
    cout << "\n=================================" << endl;
        
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl << endl;
    
    cout << "Enter your choice: ";
}

char get_selection(){
    char s;
    cin >> s;
    return toupper(s);
}

void case_P(const vector<int> &vec){
    cout << "[ ";
    for (auto i : vec){
        cout << i << " ";
    }
    cout << "]";
    if(vec.size() == 0){
        cout << "- the list is empty";
    }
    cout << endl;
}

void case_A(vector<int> &vec){
    int num_add {0};
    cout << "Enter a number to add: ";
    cin >> num_add;
    vec.push_back(num_add);
    cout << num_add << " added at position " << vec.size()-1 << endl;
}

void case_M(vector<int> vec){
    if(vec.size() == 0){
        cout << "Cannot display mean - the list is empty" << endl;
    }
    else{
        float mean{};
        float running_sum{};
        for (auto i : vec){
            running_sum += i;
        }
        mean = running_sum / vec.size();
        cout << "Mean of numbers is: " << mean << endl;
    }
}

void case_S(vector<int> vec){
    if(vec.size() == 0){
        cout << "Cannot display smallest number - the list is empty" << endl;
    }
    else{
        int smallest_number = vec.at(0);
        for (auto i : vec){
            if(smallest_number>i){
                smallest_number = i;
            }
        }
        cout << "Smallest number is: " << smallest_number << endl;
    }
}

void case_L(vector<int> vec){
    if(vec.size() == 0){
        cout << "Cannot display largest number - the list is empty" << endl;
    }
    else{
        int largest_number = vec.at(0);
        for (auto i : vec){
            if(largest_number<i){
                largest_number = i;
            }
        }
        cout << "Largest number is: " << largest_number << endl;
    }
}

void case_Q(){
    cout << "Goodbye" << endl;
}
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    char choice;
    vector<int> vec{};
    int num_add{};
    
    do{
        cout << "\n=================================" << endl;
        
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl << endl;
        
        cout << "Enter your choice: ";
        cin >> choice;
        
        cout << "------------------------------------" << endl;
        
        switch(choice){

            case 'P':
            case 'p':
                cout << "[ ";
                for (auto i : vec){
                    cout << i << " ";
                }
                cout << "]";
                if(vec.size() == 0){
                    cout << "- the list is empty";
                }
                cout << endl;
                break;

            case 'A':
            case 'a':
                cout << "Enter a number to add: ";
                cin >> num_add;
                vec.push_back(num_add);
                cout << num_add << " added at position " << vec.size()-1 << endl;
                break;
                
            case 'M':
            case 'm':
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
                break;
            
            case 'S':
            case 's':
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
                break;
            
            case 'L':
            case 'l':
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
                break;
            
            case 'Q':
            case 'q':
                cout << "Goodbye" << endl;
                break;
                
            default:
                cout << "Unknown selection, please try again" << endl;
        }
        
        cout << "------------------------------------" << endl;
        
    }while(choice!='Q' && choice!='q');
    
    
    return 0;
}
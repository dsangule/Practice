#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node * next = NULL;

        Node(int n){
            this->value = n;
        }
};

class LinkedList{
    private:
        Node * first;
    public:
        LinkedList(){
            first = NULL;
        }

        void insertBegin(int n){
            Node * newNode = new Node(n);
            newNode->next = first;
            first = newNode;
        }

        void insertEnd(int n){
            Node * newNode = new Node(n);
            if(first == NULL){
                first = newNode;
                return;
            }
            Node * temp = first;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }

        void deleteBegin(){
            if(first == NULL){
                return;
            }
            Node * temp = first;
            first = first->next;
            delete temp;
        }

        void deleteEnd(){
            if(first == NULL){
                return;
            }
            if(first->next == NULL){
                delete first;
                first = NULL;
                return;
            }
            Node * temp = first;
            while(temp->next->next != NULL){
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
        }

        void printList(){
            Node * temp = first;
            cout << "[ ";
            while(temp != NULL){
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << "] \n";
        }

        int getBegin(){
            return first->value;
        }

        int getEnd(){
            Node * temp = first;
            while(temp->next != NULL){
                temp = temp->next;
            }
            return temp->value;
        }

        bool isEmpty(){
            if(first == NULL){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){

    LinkedList ll;

    bool running = true;
    while(running){
        cout << "Linked List Program: \n";
        cout << "1) Insert at the beginning of the Linked List \n";
        cout << "2) Insert at the end of the Linked List \n";
        cout << "3) Delete from the beginning of the Linked List \n";
        cout << "4) Delete from the end of the Linked List \n";
        cout << "5) Print the Linked List \n";
        cout << "6) Quit \n";
        cout << "Input: ";
        char inp; cin >> inp;
        
        if(inp == '1'){
            cout << "Enter the number to input: ";
            int n; cin >> n;
            ll.insertBegin(n);
            cout << n << " inserted at the beginning of the Linked List. \n";
        }
        
        else if(inp == '2'){
            cout << "Enter the number to input: ";
            int n; cin >> n;
            ll.insertEnd(n);
            cout << n << " inserted at the end of the Linked List. \n";
        }
        
        else if(inp == '3'){
            if(ll.isEmpty()){
                cout << "There is nothing to delete. \n";
            }
            else{
                cout << ll.getBegin() << " deleted from the beginning of the Linked List. \n";
                ll.deleteBegin();
            }
        }
        
        else if(inp == '4'){
            if(ll.isEmpty()){
                cout << "There is nothing to delete. \n";
            }
            else{
                cout << ll.getEnd() << " deleted from the end of the Linked List. \n";
                ll.deleteEnd();
            }
        }
        
        else if(inp == '5'){
            cout << "The Linked List: \n";
            ll.printList();
        }
        
        else if(inp == '6'){
            running = false;
        }
        else{
            cout << "Enter a valid input. \n";
        }
        cout << "\n";
    }

    return 0;
}
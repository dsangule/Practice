#include <iostream>

using namespace std;

int *multArr(int *a1, int a1s, int *a2, int a2s){
    int *mArr;
    
    mArr = new int[a1s*a2s];
    
    int k = 0;
    for (int i=0; i<a2s; i++){
        for (int j=0; j<a1s; j++){
            mArr[k] = a2[i]*a1[j];
            k++;
        }
    }
    
    return mArr;
}

void print(int *arr, int arr_size){
    cout << "[ ";
    for (int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << "]";
}

int main(){
    
    int arr1[] {1, 2, 3, 4, 5};
    int arr2[] {10, 20, 30};
    
    print(arr1, 5);
    cout << endl;
    print(arr2, 3);
    cout << endl;
    
    int *result = multArr(arr1, 5, arr2, 3);
    print(result, 15);
    cout << endl;
    
    return 0;
}
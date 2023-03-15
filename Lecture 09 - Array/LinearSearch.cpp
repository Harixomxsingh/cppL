#include <iostream>
using namespace std;

int linearSearch (int target,int arr[], int n){
    for (int i = 0; i<n; i++){
        if (target == arr[i]){
            return i;
        }
    }
}

int main () {
    int arr[5] = {44,87,100,34,66};
    int value = linearSearch(100, arr, 5);
    cout << "your value found at " << value << " the value: " << arr[value] << endl;
    return 0;
}

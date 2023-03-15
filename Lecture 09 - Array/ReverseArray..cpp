#include <iostream>
using namespace std;


int print(int arr [], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void reverse_arr(int arr[], int n){
    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main () {
    int arr [5] = {6,5,4,3,2};
    print(arr, 5);
    reverse_arr(arr, 5);
    cout << endl;
    print(arr, 5);
    return 0;
}
#include <iostream>
using namespace std;

int getMax(int arr[], int n){
     int max = INT32_MIN;
     for (int i = 0; i<n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
     }
     return max;
}

int getMin(int arr[], int n){
     int min = INT32_MAX;
     for (int i = 0; i<n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
     }
     return min;
}
int main () {
    int arr[5] = {2,5,8,11,7};
    // for (int i = 0; i<5; i++){
    //     cout <<  "array " << i << ": ";
    //     cin >> arr[i];
    // }
    int min = getMin(arr, 5);
    int max = getMax(arr, 5);
    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
    // cout << INT32_MAX << endl;
    // cout << INT32_MIN << endl;

    return 0;
}
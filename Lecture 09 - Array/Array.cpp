#include <iostream>
using namespace std;

void print (int num, int arr[]){
    for(int i = 0; i<num; i++){
        cout << arr[i] << endl;
    }
}
int main(){
    // array
    int num [3] = {11, 34,56};
    print(3,num);
    return 0;
}
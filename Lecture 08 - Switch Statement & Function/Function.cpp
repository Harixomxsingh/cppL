#include <iostream>
using namespace std;

// creating a function

// find  pow
int pow (int a, int b){
    int ans = 1;
    for (int i = 1; i<=b; i++){
        ans = ans *a;
    }
    return ans;
}
bool isEven (int num){
    // Even - 1
    // odd - 0
    bool valid = 0;

    if (num%2==0){
        return valid = 1;
    }else {
        return valid = 0;
    }
}
// 1 -> prime
// 0 -> non prime
bool isPrime (int num){
    bool checkPost = 1;
    for (int i = 2; i<num; i++){
        if (num%i==0){
            checkPost = 0;
        }
    }
    if (checkPost == 1){
        return 1;
    }else {
        return 0;
    }
}
int main(){
    // int a,b;
    // cout << "a: ";
    // cin >> a;
    // cout << "b: ";
    // cin >> b;

    // int ans = pow(a, b);
    // cout << isEven(10);
    bool prime = isPrime(7);
    if (prime == 1) {
        cout << "prime";
    }else {
        cout << "non-prime";
    }
    return 0;
}
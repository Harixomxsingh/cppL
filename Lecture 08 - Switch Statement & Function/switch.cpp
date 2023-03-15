#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    char op;
    cout << "operation: ";
    cin >> op;
    switch(op){
        case '+': cout << a+b << endl;
        break; 
        case '-': cout << a-b << endl;
        break; 
        case '*': cout << a*b << endl;
        break; 
        case '/': cout << a/b << endl;
        break; 
        case '%': cout << a%b << endl;
        break; 
        default:
        cout << "try again \n";
    }

    return 0;
}
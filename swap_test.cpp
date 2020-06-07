#include <iostream>

using namespace std;

int main(){
    int a = 3, b = 4;
    int temp = 0;
    temp = a;//a = 3, b = 4, temp = 3;
    a = b;//a = 4, b = 4, temp = 3;
    b = temp;//a = 4, b = 3, temp = 3;

/*
    a = b;//a = 4, b = 4
    b = a;//a = 4, b = 4
*/
    cout << a << " " << b << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;

    if(num % 2 == 0)
        cout << num << " es un numero par." << endl;
    else
        cout << num << " es un numero impar." << endl;

    return 0;
}

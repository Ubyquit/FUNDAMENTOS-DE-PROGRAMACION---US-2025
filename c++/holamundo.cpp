#include <iostream>
using namespace std;

int main(){
    string saludo;

    cout << "Ingresa tu saludo: " << endl;
    getline(cin,saludo);
    cout << saludo << "!" << endl;

    return 0;
}
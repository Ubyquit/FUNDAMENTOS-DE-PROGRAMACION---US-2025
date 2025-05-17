#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if(num1 > num2){
        cout << "El numero mayor es : " << num1 << endl;
    }else if(num1 < num2){
        cout << "El numero mayor es : " << num2 << endl;
    }else if(num1 == num2){
        cout << "El numero " << num1 << " es igual al numero " << num2 << endl;
    }else{
        cout << "Lo que ingresaste no son numeros" << endl;
    }

    return 0;
}
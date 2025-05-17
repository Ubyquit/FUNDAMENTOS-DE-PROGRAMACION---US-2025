#include <iostream>
using namespace std;

int main(){

    // variables
    int edad;

    // solicitar al usuario que ingrese un valor
    cout << "Ingresa tu edad, el valor tiene que ser entero" << endl;
    cin >> edad;

    // if es una condicional
    if(edad >= 18){
        cout << "Tienes permison eres mayor para conducir, tienes: " << edad << endl;
    }else if(edad >= 16){
        cout << "Tienes permiso del tutor para conducir, tienes: " << edad << endl;
    }else if(edad <= 15 && edad >= 4){
        cout << "No tienes permiso para conducir eres menor de edad, tienes: " << edad << endl;
    }else{
        cout << "No tienes permiso eres un bb, tienes: " << edad << endl;
    }

    return 0; 
}


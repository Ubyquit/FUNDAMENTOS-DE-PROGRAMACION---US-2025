#include <iostream>
using namespace std;

/*
Necesita una estructura de control, que me permita saber si un usuario por medio de la edad,
puede conducir o no.

8 < 9 true
9 > 8 true
8 <= 9 true
9 <= 8 false
8 <= 8 true
9 <= 9 true
*/

int main(){

    // variables
    int edad;

    // solicitar al usuario que ingrese un valor
    cout << "Ingresa tu edad, el valor tiene que ser entero" << endl;
    cin >> edad;

    // if es una condicional
    if(edad >= 18){
        cout << "Tienes permiso para conducir, tienes: " << edad << endl;
    }else{
        cout << "No tienes permiso para conducir, tienes: " << edad << endl;
    }

    return 0; 

}


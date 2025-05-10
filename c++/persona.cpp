#include <iostream>
using namespace std;

int main(){
    // Declaras variables
    string nombre;
    string correo;
    int edad;

    // Logica de peticion
    cout << "ingresa tu nombre completo: ";
    getline(cin,nombre);

    cout << "ingresa tu correo: ";
    cin >> correo;
    
    cout << "Inngresa tu edad: ";
    cin >> edad;

    // Logica de presentacion
    cout << "Tu nombres es: " << nombre << endl;
    cout << "Tu correo es: " << correo << endl;
    cout << "Tu edad es: " << edad << " años" << endl;

    return 0;
}
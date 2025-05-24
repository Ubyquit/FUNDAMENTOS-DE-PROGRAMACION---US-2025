#include <iostream>
using namespace std;

int main(){

    /*
        1x1=1
        1x2=2
        1x3=3
    */

   int tabla;
   int inicio_tabla , fin_tabla;

   cout << "Ingresa la tabla de tu eleccion:" << endl;
   cin >> tabla;
   cout << "Ingresa el inicio de la tabla:" << endl;
   cin >> inicio_tabla;
   cout << "Ingresa el final de la tabla:" << endl;
   cin >> fin_tabla;


   for(int i = inicio_tabla; i <= fin_tabla; i++){
    cout << tabla << " x " << i << " = " << (tabla*i) << endl;
   }
}
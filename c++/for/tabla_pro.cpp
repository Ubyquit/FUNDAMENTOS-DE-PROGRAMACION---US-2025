#include <iostream>
using namespace std;

int main(){

    /*
        1x1=1
        1x2=2
        1x3=3

        2x1=2
        2x2=4
        2x3=6
    */

   int tabla_inicial, tabla_final, rango_inicial, rango_final;

   cout << "Ingresa la tabla inicial:" << endl;
   cin >> tabla_inicial; // 1
   cout << "Ingresa la tabla final:" << endl;
   cin >> tabla_final; // 2

   cout << "Ingresa el rango inicial:" << endl;
   cin >> rango_inicial; // 1
   cout << "Ingresa el rango final:" << endl;
   cin >> rango_final; // 3

   for(int i = tabla_inicial; i <= tabla_final; i++){
        cout << "-- Tabla del: " << i << " --" << endl;
        for(int j = rango_inicial; j<= rango_final;j++){
            cout << i << " x " << j << " = " << (i*j) << endl;
        }
   }
}
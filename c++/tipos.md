# Tipos de variables en c++

Las variables en c++ requieren de una interpretación más avanzada, a lo cual nosotros le llamamos tipado.

c++ es estrictamente tipado, lo cual cuando declamos una variable y su tipo, en toda la vida de la apliación, la variable va a mantener su tipo.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5; // variable entera
    float b = 3.14; // variable de punto flotante
    double c = 2.81828; // variable de punto flotante de doble precisión
    char c = 'H'; // variable de caracter
    bool d = true; // variable booleana
    bool e = false; // variable booleana
    string f = "Hola Mundo"; // variable de cadena de caracteres

    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Valor de c: " << c << endl;
    cout << "Valor de d: " << d << endl;
    cout << "Valor de e: " << e << endl;
    cout << "Valor de f: " << f << endl;

    return 0;
}
```
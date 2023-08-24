#include <iostream>
#include "collatz.hpp"

using namespace std;

// Escribamos una funcion que, al recibir un numero mayor que 1, devuelve
// la "serie" de Collatz, como un vector.

int main() {
    vector<int> resultado = serieCollatz(-1);
    cout << "El resultado es: ";
    for (int i: resultado) {
        cout << i << ", ";
    }
    return 0;
}
#include <iostream>
#include "matriz.hpp"
#include "operaciones.hpp"

using namespace std;

int main() {
    /*for (int i = 0; i < 10; i++) {
        cout << "El factorial de " << i << " es " << factorial(i) << endl;
    }*/

    /*int maximo_logico = 0;
    int vector[maximo_logico] = {};
    cout << "La sumatoria del vector es " << calcular_sumatoria(vector, maximo_logico) << endl;*/

    /*for (int i = 0; i < 50; i++) {
        cout << "El número " << i << (es_primo(i) ? "" : " no") << " es primo" << endl;
    }*/

    /*int matriz1[3][3] = {
        {10, 5, 6},
        {1, 90, 2},
        {5, 6, 7}
    };
    cout << "La traza de la matriz es " << calcular_traza(matriz1) << endl;*/

    int matriz2[2][2] = {
        {10, 20},
        {5, 10},
    };
    cout << "El determinante de la matriz es " << calcular_determinante(matriz2) << endl;
    return 0;
}

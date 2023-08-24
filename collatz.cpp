#include "collatz.hpp"

using namespace std;

vector<int> serieCollatz(int numero) {
    vector<int> resultado = {};
    if (numero <= 0) {
        return resultado;
    }
    resultado.push_back(numero);
    while (numero > 1) {
        if (numero % 2 == 0) {
            numero /= 2;
        } else {
            numero = 3 * numero + 1;
        }
        resultado.push_back(numero);
    }
    return resultado;
}
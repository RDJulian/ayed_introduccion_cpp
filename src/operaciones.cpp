#include "operaciones.hpp"

int factorial(size_t numero) {
    int resultado = 1;
    for (int i = 2; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int calcular_sumatoria(int vector[], size_t maximo_logico) {
    int suma = 0;
    for (int i = 0; i < maximo_logico; ++i) {
        suma += vector[i];
    }
    return suma;
}

bool es_primo(size_t numero) {
    bool es_primo = numero >= 2;
    int i = 2;
    while (es_primo && i < numero) {
        if (numero % i == 0) {
            es_primo = false;
        }
        i++;
    }
    return es_primo;
}

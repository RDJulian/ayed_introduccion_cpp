#ifndef OPERACIONES_HPP
#define OPERACIONES_HPP

#include <cstddef>

// PRE: -
// POST: Devuelve el factorial del número ingresado.
// 0! = 1
// 1! = 1
// 6! = 6 * 5 * 4 * 3 * 2 * 1
int factorial(size_t numero);

// PRE: Máximo lógico debe representar correctamente el tamaño del vector.
// POST: Devuelve la sumatoria de los elementos del vector.
int calcular_sumatoria(int vector[], size_t maximo_logico);

// PRE: -
// POST: Devuelve true si el número es primo.
bool es_primo(size_t numero);

#endif

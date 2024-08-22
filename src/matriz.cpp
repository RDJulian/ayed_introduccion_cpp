#include "matriz.hpp"
#include "operaciones.hpp"

int calcular_traza(int matriz[3][3]) {
    int diagonal[3];
    for (int i = 0; i < 3; ++i) {
        diagonal[i] = matriz[i][i];
    }
    return calcular_sumatoria(diagonal, 3);
}

int calcular_determinante(int matriz[2][2]) {
    return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
}

#include <iostream>
using namespace std;

int main() {
    // a) Sequência de números ímpares: 1, 3, 5, 7, ___
    int a[] = {1, 3, 5, 7};
    int proximoA = a[3] + 2; // Próximo número ímpar
    cout << "a) " << proximoA << endl;

    // b) Potências de 2: 2, 4, 8, 16, 32, 64, ____
    int b[] = {2, 4, 8, 16, 32, 64};
    int proximoB = b[5] * 2; // Multiplicação por 2
    cout << "b) " << proximoB << endl;

    // c) Quadrados perfeitos: 0, 1, 4, 9, 16, 25, 36, ____
    int c[] = {0, 1, 4, 9, 16, 25, 36};
    int proximoC = (7 * 7); // Quadrado de 7
    cout << "c) " << proximoC << endl;

    // d) Quadrados de números pares: 4, 16, 36, 64, ____
    int d[] = {4, 16, 36, 64};
    int proximoD = (10 * 10); // Quadrado de 10
    cout << "d) " << proximoD << endl;

    // e) Sequência de Fibonacci: 1, 1, 2, 3, 5, 8, ____
    int e[] = {1, 1, 2, 3, 5, 8};
    int proximoE = e[4] + e[5]; // Soma dos dois últimos números
    cout << "e) " << proximoE << endl;

    // f) Sequência crescente após um pulo: 2, 10, 12, 16, 17, 18, 19, ____
    int f[] = {2, 10, 12, 16, 17, 18, 19};
    int proximoF = f[6] + 1; // Próximo número consecutivo
    cout << "f) " << proximoF << endl;

    return 0;
}

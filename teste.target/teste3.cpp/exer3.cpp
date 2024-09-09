#include <iostream>
using namespace std;

int main() {
    int INDICE = 12, SOMA = 0, K = 1;

    // Loop que realiza as operações descritas
    while (K < INDICE) {
        K = K + 1;      // Incrementa K
        SOMA = SOMA + K;  // Soma o valor atualizado de K
    }

    // Exibir o valor de SOMA
    cout << "O valor final de SOMA é: " << SOMA << endl; //o valor final da soma é 77

    return 0;
}

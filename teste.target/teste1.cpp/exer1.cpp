#include <iostream>
using namespace std;

// Função que retorna verdadeiro se o número pertence à sequência de Fibonacci
bool pertenceFibonacci(int num) {
    int a = 0, b = 1, c = 0;
    
    if (num == 0 || num == 1) {
        return true; // 0 e 1 são os primeiros números da sequência de Fibonacci
    }

    // Gerar a sequência de Fibonacci até que o número seja encontrado ou ultrapassado
    while (c < num) {
        c = a + b; // Próximo número da sequência
        a = b;
        b = c;
    }

    return c == num; // Se o número gerado for igual ao número informado, ele pertence à sequência
}

int main() {
    int numero;

    // Entrada do número pelo usuário
    cout << "Informe um número: ";
    cin >> numero;

    // Verifica se o número pertence à sequência de Fibonacci
    if (pertenceFibonacci(numero)) {
        cout << "O número " << numero << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << "O número " << numero << " NÃO pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}
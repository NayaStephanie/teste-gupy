#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int contador = 0;

    // Entrada da string pelo usuário
    cout << "Informe uma string: ";
    getline(cin, texto); // Lê a linha completa, incluindo espaços

    // Percorrer a string e contar quantas vezes 'a' ou 'A' aparecem
    for (char c : texto) {
        if (c == 'a' || c == 'A') {
            contador++;
        }
    }

    // Verificar se a letra 'a' foi encontrada e exibir o resultado
    if (contador > 0) {
        cout << "A letra 'a' (maiúscula ou minúscula) aparece " << contador << " vez(es) na string." << endl;
    } else {
        cout << "A letra 'a' (maiúscula ou minúscula) NÃO foi encontrada na string." << endl;
    }

    return 0;
}

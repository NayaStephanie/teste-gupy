/*Solução:
Primeira ação: Ligue o primeiro interruptor e deixe-o ligado por alguns minutos. Isso fará com que a lâmpada correspondente aqueça.
Segunda ação: Desligue o primeiro interruptor e ligue o segundo interruptor. Vá até a sala das lâmpadas pela primeira vez.
Se a lâmpada estiver acesa, ela é controlada pelo segundo interruptor (que ainda está ligado).
Se a lâmpada estiver apagada, toque na lâmpada:
Se a lâmpada estiver quente, ela é controlada pelo primeiro interruptor (que foi desligado antes de ir até a sala, mas estava ligada antes).
Se a lâmpada estiver fria, ela é controlada pelo terceiro interruptor (que nunca foi ligado).
Com base nessas observações, você poderá determinar qual interruptor controla qual lâmpada.*/

#include <iostream>
using namespace std;

int main() {
    // Estado das lâmpadas e interruptores
    bool lampada1 = false, lampada2 = false, lampada3 = false; // Inicialmente todas apagadas
    bool interruptor1 = false, interruptor2 = false, interruptor3 = false; // Todos os interruptores desligados
    bool lampada1_quente = false; // Para representar se a lâmpada 1 ficou quente

    // Primeira ação: Ligar o primeiro interruptor por alguns minutos
    interruptor1 = true; 
    lampada1 = true; // Lampada 1 acende e aquece após alguns minutos
    lampada1_quente = true; // Marcamos que a lâmpada 1 aqueceu

    // Segunda ação: Desligar o primeiro interruptor e ligar o segundo
    interruptor1 = false; 
    lampada1 = false; // A lâmpada 1 apaga, mas ainda estará quente por um tempo
    interruptor2 = true; 
    lampada2 = true; // Lampada 2 acende

    // Simulação de ir para a sala das lâmpadas pela primeira vez
    cout << "Você vai até a sala das lâmpadas.\n";
    
    if (lampada2) {
        cout << "A lâmpada 2 está acesa, logo o interruptor 2 controla a lâmpada 2.\n";
    }

    if (!lampada1 && lampada1_quente) {
        cout << "A lâmpada 1 está apagada mas está quente, logo o interruptor 1 controla a lâmpada 1.\n";
    }

    if (!lampada1 && !lampada1_quente && !lampada2) {
        cout << "A lâmpada 3 está apagada e fria, logo o interruptor 3 controla a lâmpada 3.\n";
    }

    return 0;
}

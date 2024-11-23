#include <iostream>
#include <locale.h>

using namespace std;

// Declaração da função
void somaConsecutiva(int numeroinicial, int acumulador);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeroinicial;

    cout << "Digite um número: ";
    cin >> numeroinicial;

    // Chamada da função com o número inicial e o acumulador começando em 0
    somaConsecutiva(numeroinicial, 0);

    system("pause");
    return 0;
}

// Implementação da função
void somaConsecutiva(int numeroinicial, int acumulador) {
    // Adiciona o número atual ao acumulador
    acumulador += numeroinicial;

    // Exibe o número atual e o valor acumulado
    cout << "Número atual: " << numeroinicial << ", Soma acumulada: " << acumulador << "\n";

    // Caso base: para a recursão quando o número atual é 1
    if (numeroinicial == 1) {
        cout << "Soma total: " << acumulador << endl;
        return;
    }

    // Chamada recursiva diminuindo o número inicial
    somaConsecutiva(numeroinicial - 1, acumulador);
}



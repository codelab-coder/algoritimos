#include <iostream>
#include <locale.h>

using namespace std;

// Declara��o da fun��o
void somaConsecutiva(int numeroinicial, int acumulador);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeroinicial;

    cout << "Digite um n�mero: ";
    cin >> numeroinicial;

    // Chamada da fun��o com o n�mero inicial e o acumulador come�ando em 0
    somaConsecutiva(numeroinicial, 0);

    system("pause");
    return 0;
}

// Implementa��o da fun��o
void somaConsecutiva(int numeroinicial, int acumulador) {
    // Adiciona o n�mero atual ao acumulador
    acumulador += numeroinicial;

    // Exibe o n�mero atual e o valor acumulado
    cout << "N�mero atual: " << numeroinicial << ", Soma acumulada: " << acumulador << "\n";

    // Caso base: para a recurs�o quando o n�mero atual � 1
    if (numeroinicial == 1) {
        cout << "Soma total: " << acumulador << endl;
        return;
    }

    // Chamada recursiva diminuindo o n�mero inicial
    somaConsecutiva(numeroinicial - 1, acumulador);
}



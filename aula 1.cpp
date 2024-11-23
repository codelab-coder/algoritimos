#include <iostream>
#include <locale.h>

using namespace std;

// Declaração das funções
void mensagem();
void soma2(int numero1, int numero2);
int soma3(int numero1, int numero2, int numero3);

int main() {
    setlocale(LC_ALL, "portuguese");
    mensagem();

    soma2(12, 20);


    cout << "Soma fixa: " << soma3(12, 20, 32) << endl;

    
    int n1, n2, n3;
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;

    // Chamada da função soma3 com os números digitados
    cout << "\nO total da soma dos três números é: " << soma3(n1, n2, n3) << endl;

    system("pause");
    return 0;
}


int soma3(int numero1, int numero2, int numero3) {
    return numero1 + numero2 + numero3;
}

void soma2(int n1, int n2) {
    cout << "Número 1: " << n1 << endl;
    cout << "Número 2: " << n2 << endl;
    cout << "Total: " << n1 + n2 << endl;
}

void mensagem() {
    cout << "Curso de Lógica de Programação!\n\n";
}



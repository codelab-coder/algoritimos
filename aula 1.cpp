#include <iostream>
#include <locale.h>

using namespace std;

// Declara��o das fun��es
void mensagem();
void soma2(int numero1, int numero2);
int soma3(int numero1, int numero2, int numero3);

int main() {
    setlocale(LC_ALL, "portuguese");
    mensagem();

    soma2(12, 20);


    cout << "Soma fixa: " << soma3(12, 20, 32) << endl;

    
    int n1, n2, n3;
    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
    cout << "Digite o segundo n�mero: ";
    cin >> n2;
    cout << "Digite o terceiro n�mero: ";
    cin >> n3;

    // Chamada da fun��o soma3 com os n�meros digitados
    cout << "\nO total da soma dos tr�s n�meros �: " << soma3(n1, n2, n3) << endl;

    system("pause");
    return 0;
}


int soma3(int numero1, int numero2, int numero3) {
    return numero1 + numero2 + numero3;
}

void soma2(int n1, int n2) {
    cout << "N�mero 1: " << n1 << endl;
    cout << "N�mero 2: " << n2 << endl;
    cout << "Total: " << n1 + n2 << endl;
}

void mensagem() {
    cout << "Curso de L�gica de Programa��o!\n\n";
}



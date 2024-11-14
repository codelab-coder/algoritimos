#include <iostream>
#include <locale.h>

using namespace std ;

int main() {
	setlocale(LC_ALL, "");
	int numero1, numero2, numero3, soma ;
	cout << "digite o primeiro número: \n";
	cin>> numero1;
	cout << "digite o segundo número: \n";
	cin>> numero2;
	cout << "digite o terceiro número: \n";
	cin>> numero3;
	soma = numero1+ numero2 + numero3;
	cout << "\n\n a soma dos três números é"<< soma << "\n";
	system("pause");
	return 0;
	
}

#include <iostream>
#include <locale.h>

using namespace std ;

int main() {
	setlocale(LC_ALL, "");
	int numero1, numero2, numero3, soma ;
	cout << "digite o primeiro n�mero: \n";
	cin>> numero1;
	cout << "digite o segundo n�mero: \n";
	cin>> numero2;
	cout << "digite o terceiro n�mero: \n";
	cin>> numero3;
	soma = numero1+ numero2 + numero3;
	cout << "\n\n a soma dos tr�s n�meros �"<< soma << "\n";
	system("pause");
	return 0;
	
}

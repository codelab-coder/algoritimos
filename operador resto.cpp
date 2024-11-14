#include <iostream>
#include <locale.h>

using namespace std;


int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, resto;
	
	numero1=10;
	resto=numero1%2;
	cout << "O resto da divisão é:"<< resto;
	
	int numero2, resto2;
	numero2=10;
	resto2=numero2%3;
	cout << "O resto da divisão é:"<< resto2;
	
	
	
	system ("pause");
	return 0;
}


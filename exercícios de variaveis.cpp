#include <iostream> //Entrada e sa�da de dados

#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;


int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, numero3, primeiraAcao, segundaAcao, terceiraAcao;
	cout << "digite o primeiro n�mero inteiro\n";
	cin>> numero1;
	cout << "digite o segundo n�mero inteiro\n";
	cin>> numero2;
	cout << "digite o terceiro n�mero inteiro\n";
	cin>> numero3;
	primeiraAcao= numero1*2+numero2/2;
	segundaAcao=numero1*3+numero3;
	terceiraAcao= numero3*2;
	cout <<" resultado da primeira a�ao" << primeiraAcao <<"\n resultado da segunda a�ao"<< segundaAcao <<" \n resultado da terceira a�ao"<< terceiraAcao;
	
	
	
	system ("pause");
	return 0;
}
	

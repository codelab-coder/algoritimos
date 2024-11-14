#include <iostream> //Entrada e saída de dados

#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;


int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, numero3, primeiraAcao, segundaAcao, terceiraAcao;
	cout << "digite o primeiro número inteiro\n";
	cin>> numero1;
	cout << "digite o segundo número inteiro\n";
	cin>> numero2;
	cout << "digite o terceiro número inteiro\n";
	cin>> numero3;
	primeiraAcao= numero1*2+numero2/2;
	segundaAcao=numero1*3+numero3;
	terceiraAcao= numero3*2;
	cout <<" resultado da primeira açao" << primeiraAcao <<"\n resultado da segunda açao"<< segundaAcao <<" \n resultado da terceira açao"<< terceiraAcao;
	
	
	
	system ("pause");
	return 0;
}
	

#include <iostream> //Entrada e sa�da de dados

#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;


int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	int numero1;
	
	numero1=10;
	cout << "valor inicial\n";
	cout << "numero:"<< numero1<<"\n";
	
	numero1*=2;
	cout << "numero:"<< numero1<<"\n";
	cout << "\n valor inicial por 2\n";
	numero1/=4;
	cout << "numero:"<< numero1<<"\n";
	
	numero1= 100;
	cout << "\n pos fixado\n";
	cout << "numero=100 \n";
	cout << "numero=" << numero1 << "\n";
	cout << "numero=" << numero1++ << "\n";
	
	
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}

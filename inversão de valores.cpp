#include <iostream> //Entrada e sa�da de dados

#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;


int main(){
	int numero1;
	numero1=10;
	cout <<"primeira inversao de valores\n";
	cout <<"numero 1=" << numero1 <<"\n";
	numero1=numero1*-1;
	cout <<"numero 1=" << numero1 <<"\n";
	cout <<"\n segunda inversao de valores\n";	
	numero1=20;
	cout <<"numero 1=" << numero1 <<"\n";
	cout <<"numero 1=" << -numero1 <<"\n";	
	cout <<"numero 1=" << numero1 <<"\n";
	numero1=30;
	cout << "\n terceira inversao de valores\n";
	cout <<"numero 1=" << numero1 <<"\n";
	numero1=-numero1;	
	cout <<"numero 1=" << numero1 <<"\n";
	
	
	
	
	
	
		//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
     return 0;
}

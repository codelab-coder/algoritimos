#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	


	
	int numero, contador, impar;
	
	cout << "Digite um n�mero inteiro: \n";
	cin >> numero;
	
	contador = 0;
	impar = 1;
	
	//while = enquanto
	while ( contador <= numero ){
		
		cout << "\n" << impar;
		impar = impar + 2;
		contador++;
		
	}
	
	
			
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}

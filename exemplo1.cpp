#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	//while = enquanto
	
	int contador;
	
	contador = 1;
	
	//Enquanto
	while( contador < 11 ){
		
		//Impress�o na tela
		cout << "N�mero: " << contador << "\n";
		
		//Contar + 1
		contador++;
		
	}
	
	//--------------------------------------------------
	
	int contador2;
	
	contador2 = 10;
	
	cout << "\n\nExemplo 2\n\n";
	
	//While = enquanto
	while( contador2 > 0 ){
		
		cout << contador2 << "\n";
		
		//Contar - 1
		contador2--;
		
	}
	
	//------------------------------------------------------
	
	int qtdVezes;
	double nota, media, soma;
	
	soma = 0;
	qtdVezes = 1;
	
	//while = enquanto
	while( qtdVezes <= 4 ){
		
		cout << "Digite a nota " << qtdVezes << "\n";
		cin >> nota;
		
		//soma = soma + nota = 18
		soma+=nota;
		
		//++ = qtdVezes + 1
		qtdVezes++;
		
	}
	
	cout << "\n\n";
	media = soma / 4;
	
	cout << "A m�dia �: " << media << "\n";
	
	
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}

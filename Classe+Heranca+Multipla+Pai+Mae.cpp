#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

#include "HerancaMultiplaPaiMae.h"

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	Filho *dadosFilho = new Filho();
	
	//Imprimindo dados casa Pai
	dadosFilho -> imprimiDadosCasaPai();
	
	//Imprimindo dados casa Mae
	dadosFilho -> imprimiDadosCasaMae();
	
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}



#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

#include "Heranca, Virtual, Override.h"

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	AlunoEscolaFilho *dadosEscolaFilho = new AlunoEscolaFilho();
	
	dadosEscolaFilho -> exibirNaTela();
	
	
	AlunoEscolaNeto *dadosEscolaNeto = new AlunoEscolaNeto("Escola do Neto", "Per�odo Matutino");
	
	dadosEscolaNeto -> escola = "Escola Alves Neto Herdeiro";
	dadosEscolaNeto -> periodo = "Vespertino";
	
	dadosEscolaNeto -> exibirNaTela();
	
	
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}



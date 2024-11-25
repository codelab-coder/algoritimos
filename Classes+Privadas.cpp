#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

#include "AlunoPrivado.h"

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	Aluno *dadosAluno = new Aluno(1);
	
	//Imprimindo dados
	dadosAluno -> exibirDadosNaTela();
	
	//Alterando o nome que � publico
	dadosAluno -> nome = "Pedro Ramos";
	dadosAluno -> setidade(23);
	
		
	//Imprimindo dados
	dadosAluno -> exibirDadosNaTela();
	
	//Alterando idade
	dadosAluno -> setidade(45);
	
	cout << "\n\n-------- Imprimindo publicos e privados -----------\n\n";
	cout << dadosAluno -> nome << "\n";
	cout << dadosAluno -> getidade() << "\n";
		
	
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}



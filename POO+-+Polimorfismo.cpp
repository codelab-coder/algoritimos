#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

#include "SobrecargaMetodos.h"

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	/*Polimorfismo
	Significa v�rias formas, pode mudar ou assumir outra forma
	Podemos com o polimorfismo criar v�rios m�todos construtores com o mesmo nome desde
	que tenham parametros diferentes
	
	*/
	
	Aluno *dadosAluno = new Aluno();
	
	//Metodo contrutor 1
	dadosAluno -> DadosAluno();
	
	//Metodo contrutor 2
	dadosAluno -> DadosAluno("222.222.222-22");
	
	//Metodo contrutor 3
	dadosAluno -> DadosAluno("222.222.222-22", "Berenice Alves", 39, "Feminino");
	
	
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}



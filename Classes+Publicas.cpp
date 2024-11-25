#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

class Aluno{
	
	public:
		
		//Objetos
		string nome = "Maria Eduarda";
		int idade = 29;
		string sexo = "Feminino";
		
		string estado;
		
		
		//Prototipamos
		void verificaEstado(string estadoDoAluno);
	
	
};

//Contruimos o nosso Met�do
void Aluno::verificaEstado(string estadoDoAluno){
	
	//if = se
	if( estadoDoAluno == "SP" ){
		
		this -> estado = "S�o Paulo";
		
	}else if( estadoDoAluno == "SC" ){
		
		this -> estado = "Santa Catarina";
		
	}else if( estadoDoAluno == "RJ" ){
		
		this -> estado = "Rio de Janeiro";
		
	}
	
}

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	Aluno *dadosAluno = new Aluno();
	
	cout << "Nome: " << dadosAluno -> nome << "\n";
	cout << "Idade: " << dadosAluno -> idade << "\n";
	cout << "Sexo: " << dadosAluno -> sexo << "\n";
	
	dadosAluno -> verificaEstado("SP");
	cout << "Estado: " << dadosAluno -> estado << "\n";
	
	dadosAluno -> verificaEstado("RJ");
	cout << "Estado: " << dadosAluno -> estado << "\n";
			
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}



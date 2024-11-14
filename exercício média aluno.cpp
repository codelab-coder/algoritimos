#include <iostream> //Entrada e saída de dados

#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;
double nota1vg, nota2vg;



int main(){
	
	//Biblioteca responsável pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	//Impede o fechamento da tela após execução do código para dar tempo de testarmos e ver o resultado
	system("pause");
	double nota3vl, nota4vl, media;
	string aluno;
	cout << "digite seu nome\n";
	getline (cin,aluno);
	cout << "digite sua primeira nota\n";
	cin>> nota1vg;
	cout << "digite sua segunda nota\n";
	cin>> nota2vg;
	cout << "digite sua terceira nota\n";
	cin>> nota3vl;
	cout << "digite sua quarta nota\n";
	cin>> nota4vl;
	
	media = (nota1vg+nota2vg+nota3vl+nota4vl)/4;
	cout<< "o aluno(a)"<< aluno << " obteve média de:"<< media << "\n\n";
	
	system("pause");
	return 0;
}

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
	nota1vg=10;
	nota2vg=9.5;
	nota3vl=9;
	nota4vl=8.5;
	media = (nota1vg+nota2vg+nota3vl+nota4vl)/4;
	cout << "media:" <<media<< "\n";
	system("pause");
	return 0;
}

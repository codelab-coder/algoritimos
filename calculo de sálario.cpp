#include <iostream> //Entrada e sa�da de dados

#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;


int main () {
	setlocale(LC_ALL, "Portuguese");
	int ganhoPorHora, hora, ganhoPorDia, ganhoPorMes;
	cout<< "digite quanto voc� recebe por uma hora de trabalho \n";
	cin >> ganhoPorHora;
	cout<< "digite quantas horas voc� trabalha por dia \n";
	cin >> hora;
	ganhoPorDia= ganhoPorHora*hora;
	ganhoPorMes=ganhoPorDia*30;
	cout << "voc� ganha por dia:\n"<< ganhoPorDia <<"\n e ganha por m�s:\n"<<ganhoPorMes;
	
	
	
	
	system ("pause");
	return 0;
}

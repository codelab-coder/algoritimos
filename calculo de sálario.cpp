#include <iostream> //Entrada e saída de dados

#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;


int main () {
	setlocale(LC_ALL, "Portuguese");
	int ganhoPorHora, hora, ganhoPorDia, ganhoPorMes;
	cout<< "digite quanto você recebe por uma hora de trabalho \n";
	cin >> ganhoPorHora;
	cout<< "digite quantas horas você trabalha por dia \n";
	cin >> hora;
	ganhoPorDia= ganhoPorHora*hora;
	ganhoPorMes=ganhoPorDia*30;
	cout << "você ganha por dia:\n"<< ganhoPorDia <<"\n e ganha por mês:\n"<<ganhoPorMes;
	
	
	
	
	system ("pause");
	return 0;
}

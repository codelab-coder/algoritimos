#include <iostream> //Entrada e sa�da de dados

#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;


int main () {
	setlocale(LC_ALL, "Portuguese");
	int ganhoPorHora, hora, ganhoPorDia, salarioBruto, ir,inss,sindicato, salarioliquido;
	cout<< "digite quanto voc� recebe por uma hora de trabalho \n";
	cin >> ganhoPorHora;
	cout<< "digite quantas horas voc� trabalha por dia \n";
	cin >> hora;
	ganhoPorDia= ganhoPorHora*hora;
	salarioBruto=ganhoPorDia*30;
	ir=salarioBruto*11/100;
	inss=salarioBruto*8/100;
	sindicato=salarioBruto*5/100;
	salarioliquido=salarioBruto-ir-inss-sindicato;
	
	cout << "voc� ganha por dia:\n"<< ganhoPorDia <<"\n e seu sal�rio bruto � :\n"<<salarioBruto<< "\n voc� paga de imposto de renda:\n"<< ir<< "\n voc� paga de INSS\n"<< inss << "\n voc� paga de sindicato\n"<< sindicato<< "\n com todos os descontos seu sal�rio l�quido �\n"<< salarioliquido;
	
	
	
	
	system ("pause");
	return 0;
}

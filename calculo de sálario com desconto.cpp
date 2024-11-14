#include <iostream> //Entrada e saída de dados

#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;


int main () {
	setlocale(LC_ALL, "Portuguese");
	int ganhoPorHora, hora, ganhoPorDia, salarioBruto, ir,inss,sindicato, salarioliquido;
	cout<< "digite quanto você recebe por uma hora de trabalho \n";
	cin >> ganhoPorHora;
	cout<< "digite quantas horas você trabalha por dia \n";
	cin >> hora;
	ganhoPorDia= ganhoPorHora*hora;
	salarioBruto=ganhoPorDia*30;
	ir=salarioBruto*11/100;
	inss=salarioBruto*8/100;
	sindicato=salarioBruto*5/100;
	salarioliquido=salarioBruto-ir-inss-sindicato;
	
	cout << "você ganha por dia:\n"<< ganhoPorDia <<"\n e seu salário bruto é :\n"<<salarioBruto<< "\n você paga de imposto de renda:\n"<< ir<< "\n você paga de INSS\n"<< inss << "\n você paga de sindicato\n"<< sindicato<< "\n com todos os descontos seu salário líquido é\n"<< salarioliquido;
	
	
	
	
	system ("pause");
	return 0;
}

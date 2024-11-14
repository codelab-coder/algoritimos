#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL,"portuguese");
	int numero;
	string fruta;
	numero=1;
	if(numero>= 2 && numero <= 10){
		cout << "\n";
		cout << "está no intervalo de 2 a 10 \n\n";
	}else{
		cout << "não está no intervalo de 2 a 10 \n\n";
	}
	if(numero>=2||numero<=10){
		cout << "número"<< numero << "\n";
		cout << "é maior ou igual a 2 ou menor ou igual a 10\n\n" ;
		
	}
	fruta= "pera";
	if (fruta=="maça" || fruta=="banana"){
		cout << "fruta"<< fruta<< "\n";
		cout << " essa fruta é uma maça ou uma banana\n\n";
	}else{
		cout << "fruta"<< fruta<< "\n";
		cout << "essa fruta não é uma maça ou uma banana\n\n";
	}
	system ("pause");
}

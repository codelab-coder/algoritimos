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
		cout << "est� no intervalo de 2 a 10 \n\n";
	}else{
		cout << "n�o est� no intervalo de 2 a 10 \n\n";
	}
	if(numero>=2||numero<=10){
		cout << "n�mero"<< numero << "\n";
		cout << "� maior ou igual a 2 ou menor ou igual a 10\n\n" ;
		
	}
	fruta= "pera";
	if (fruta=="ma�a" || fruta=="banana"){
		cout << "fruta"<< fruta<< "\n";
		cout << " essa fruta � uma ma�a ou uma banana\n\n";
	}else{
		cout << "fruta"<< fruta<< "\n";
		cout << "essa fruta n�o � uma ma�a ou uma banana\n\n";
	}
	system ("pause");
}

#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int numeroCor;
	
	cout << "Digite um n�mero para escolher o pa�s que vai ganhar a copa do mundo!  \n";
	cout<< "1-Alemanha: \n";
	cout<< "2-Argentina: \n";
	cout<< "3-Camar�es: \n";
	cout<< "4-Brasil: \n";
	cout<< "5-S�rvia: \n";
	cout<< "6-Sui�a: \n";
	cin>> numeroCor;
	
	switch (numeroCor){
		case 1:
			cout << "voc� escolheu a Alemanha para ganhar a copa do mundo\n";
			break;
		case 2:
			cout << "voc� escolheu a Argentina para ganhar a copa do mundo\n";
			break;
		case 3:
			cout << "voc� escolheu Camar�es para ganhar a copa do mundo\n";
			break;
		case 4:
			cout << "voc� escolheu o Brasil para ganhar a copa do mundo\n";
			break;
		case 5:
			cout << "voc� escolheu a S�rvia para ganhar a copa do mundo\n";
			break;
		case 6:
			cout << "voc� escolheu a Sui�a para ganhar a copa do mundo\n";
			break;
	}
	system("pause");
	return 0;
	 
}

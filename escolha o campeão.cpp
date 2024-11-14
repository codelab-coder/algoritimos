#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int numeroCor;
	
	cout << "Digite um número para escolher o país que vai ganhar a copa do mundo!  \n";
	cout<< "1-Alemanha: \n";
	cout<< "2-Argentina: \n";
	cout<< "3-Camarões: \n";
	cout<< "4-Brasil: \n";
	cout<< "5-Sérvia: \n";
	cout<< "6-Suiça: \n";
	cin>> numeroCor;
	
	switch (numeroCor){
		case 1:
			cout << "você escolheu a Alemanha para ganhar a copa do mundo\n";
			break;
		case 2:
			cout << "você escolheu a Argentina para ganhar a copa do mundo\n";
			break;
		case 3:
			cout << "você escolheu Camarões para ganhar a copa do mundo\n";
			break;
		case 4:
			cout << "você escolheu o Brasil para ganhar a copa do mundo\n";
			break;
		case 5:
			cout << "você escolheu a Sérvia para ganhar a copa do mundo\n";
			break;
		case 6:
			cout << "você escolheu a Suiça para ganhar a copa do mundo\n";
			break;
	}
	system("pause");
	return 0;
	 
}

#include <iostream>
#include<locale.h>




using namespace std;


int main(){
	setlocale(LC_ALL, "portuguese");
	int numero;
	do{
	
	cout<< "digite um numero inteiro"<<"\n";
	cin>> numero;
	cout<< "numero:"<< numero*numero<<"\n";
	}while(numero>0);

	
	
	
	system("pause");
	return 0;
}

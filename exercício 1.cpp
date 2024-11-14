#include <iostream>
#include<locale.h>




using namespace std;


int main(){
	setlocale(LC_ALL, "portuguese");
	int numero;
	cout<< "digite um numero inteiro"<<"\n";
	cin>> numero;
	while(numero>5){
		cout<<"digite novamente o número porque ele precisa estar entre 1 e 5"<<"\n";
		cin>> numero;
		if(numero<=5){
			break;
		}
	}
	
	
	
	system("pause");
	return 0;
}

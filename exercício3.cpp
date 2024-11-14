#include <iostream>
#include<locale.h>




using namespace std;


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	cout<< "digite um número inteiro"<<"\n";
	cin>>numero;
	while(numero>0){
		cout<< "muito bem você digitou:"<<numero<<"\n"<<"agora digite outro"<<"\n";
		cin>> numero;
		if(numero==0){
			break;
		}
	}
	
	system("pause");
	return 0;
}

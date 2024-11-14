#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	int numero1, numero2;
	string fruta;
	numero1=5;
	
	if(numero1>50){
		cout << " resultado if número 1 \n";
		cout << "O número 1 é maior que 50\n";
		
	}else{
		cout << "o numero 1 não é maior que 50 \n";
	}
	numero2= 10;
	if(numero1>numero2){
		cout << "resultado if número2 \n";
		cout << "numero1:"<<numero1<< "\n";
		cout << "numero2:"<< numero2<< "\n";
		cout <<"O número 1 é maior que número 2\n";
	}else{
		cout << "resultado if número2 \n";
		cout << "numero1:"<<numero1<< "\n";
		cout << "numero2:"<< numero2<< "\n";
		cout << "o numero1 é menor que número 2\n";
	}
	fruta= "laranja";
	if(fruta== "maça"){
		cout << "resultado if número3 \n";
		cout<<"está fruta é uma maça\n";
	}else{
		cout<<"está fruta não é uma maça\n";
	}
	system ("pause");
} 


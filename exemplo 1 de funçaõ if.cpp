#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	int numero1, numero2;
	string fruta;
	numero1=5;
	
	if(numero1>50){
		cout << " resultado if n�mero 1 \n";
		cout << "O n�mero 1 � maior que 50\n";
		
	}else{
		cout << "o numero 1 n�o � maior que 50 \n";
	}
	numero2= 10;
	if(numero1>numero2){
		cout << "resultado if n�mero2 \n";
		cout << "numero1:"<<numero1<< "\n";
		cout << "numero2:"<< numero2<< "\n";
		cout <<"O n�mero 1 � maior que n�mero 2\n";
	}else{
		cout << "resultado if n�mero2 \n";
		cout << "numero1:"<<numero1<< "\n";
		cout << "numero2:"<< numero2<< "\n";
		cout << "o numero1 � menor que n�mero 2\n";
	}
	fruta= "laranja";
	if(fruta== "ma�a"){
		cout << "resultado if n�mero3 \n";
		cout<<"est� fruta � uma ma�a\n";
	}else{
		cout<<"est� fruta n�o � uma ma�a\n";
	}
	system ("pause");
} 


#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	setlocale(LC_ALL , "portuguese");
	
	int numero1, numero2, numero3;
	cout<< "digite o primeiro n�mero";
	cin>> numero1;
	cout<< "digite o segundo n�mero";
	cin>> numero2;
	cout<< "digite o terceiro n�mero";
	cin>> numero3;
	
	if(numero1>numero2 && numero1>numero3){
		cout << "numero1 � o maior digitado"<<endl;
	}else if(numero2> numero1 && numero2>numero3 ){
		cout << "numero2 � o maior digitado"<<endl;
	}else if(numero3> numero1 && numero3>numero2){
		cout << "numero3 � o maior digitado"<<endl;
	}else{
		cout<< "nehum n�mero foi digitado"<<endl;
	}
	
	
	
	
	
	system("pause");
	return 0;
	
}

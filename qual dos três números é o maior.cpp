#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	setlocale(LC_ALL , "portuguese");
	
	int numero1, numero2, numero3;
	cout<< "digite o primeiro número";
	cin>> numero1;
	cout<< "digite o segundo número";
	cin>> numero2;
	cout<< "digite o terceiro número";
	cin>> numero3;
	
	if(numero1>numero2 && numero1>numero3){
		cout << "numero1 é o maior digitado"<<endl;
	}else if(numero2> numero1 && numero2>numero3 ){
		cout << "numero2 é o maior digitado"<<endl;
	}else if(numero3> numero1 && numero3>numero2){
		cout << "numero3 é o maior digitado"<<endl;
	}else{
		cout<< "nehum número foi digitado"<<endl;
	}
	
	
	
	
	
	system("pause");
	return 0;
	
}

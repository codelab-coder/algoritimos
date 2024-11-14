#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int operacao;
	int n1;
	int n2;
	int resultado;
	cout<< "digite o primeiro número";
	cin>>n1;
	cout<< "digite o segundo número";
	cin>> n2;
	cout<< "digite o número da operação\n";
	cout<< "1- soma";
	cout<< "2- subtração";
	cout<< "3- multiplicação";
	cout<< "4- divisão";
	cin>> operacao;
	switch(operacao){
		case 1:
		
			cout<< "você escolheu soma e o resultado é :"<< n1+n2<<"\n";
			break;
		case 2:
			
			cout << "você escolheu subtração e o resultado é :"<< n1-n2<<"\n";
			break;
		case 3:
			resultado==n1*n2;
			cout << "você escolheu multiplicação e o resultado é :"<< n1*n2<< "\n";
		case 4:
		
			cout << "você escolheu divisão e o resultado é :"<< n1/n2<< "\n";
			break;
			
	}
	
	
	
	
	
	
	system("pause");
	return 0;
}
	

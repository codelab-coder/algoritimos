#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int operacao;
	int n1;
	int n2;
	int resultado;
	cout<< "digite o primeiro n�mero";
	cin>>n1;
	cout<< "digite o segundo n�mero";
	cin>> n2;
	cout<< "digite o n�mero da opera��o\n";
	cout<< "1- soma";
	cout<< "2- subtra��o";
	cout<< "3- multiplica��o";
	cout<< "4- divis�o";
	cin>> operacao;
	switch(operacao){
		case 1:
		
			cout<< "voc� escolheu soma e o resultado � :"<< n1+n2<<"\n";
			break;
		case 2:
			
			cout << "voc� escolheu subtra��o e o resultado � :"<< n1-n2<<"\n";
			break;
		case 3:
			resultado==n1*n2;
			cout << "voc� escolheu multiplica��o e o resultado � :"<< n1*n2<< "\n";
		case 4:
		
			cout << "voc� escolheu divis�o e o resultado � :"<< n1/n2<< "\n";
			break;
			
	}
	
	
	
	
	
	
	system("pause");
	return 0;
}
	

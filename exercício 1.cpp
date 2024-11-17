#include<iostream>
#include<locale.h>




using namespace std;


int main(){
	setlocale(LC_ALL,"portuguese");
	int numero;
	int contador;
	int resultado;
	cout<<"informe o núemro o qual deseja ver a tabuada\n";
	cin>>numero;
	if(numero>=1 && numero<=10){
		for(contador=1; contador<=10; contador++){
			resultado= numero*contador;
			cout<< "\n"<< numero<< "x"<<contador<<"="<< resultado;
		}
		
	}else{
		cout << "valor inválido";
	}
	



		
	
	
	
	
	system("pause");
	return 0;
	
}

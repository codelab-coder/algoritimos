#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	double valorEntrada;
	string nome, sexo;
	valorEntrada=12;
	cout << "digite seu nome: \n";
	cin>> nome;
	cout << "digite seu sexo: \n";
	cin>> sexo;
	if(sexo=="Masculino"){
		cout<< "nome:"<< nome<< endl;
		cout<< "sexo:"<< sexo<< endl<< endl;
		cout<<"valor de entrada:"<< valorEntrada<<endl<< endl;
		cout<< "aproveite o show \n"<< endl << endl ;

		
	}else if(sexo=="Feminino"){
	    valorEntrada= valorEntrada/2;
		cout<< "nome:"<< nome<< endl;
		cout<< "sexo:"<< sexo<< endl<< endl;
		cout<<"valor de entrada"<< valorEntrada<<endl<<endl;
		cout<< "aproveite o show \n" ;
	
	}else{
		cout << "sexo inválido";
	}
	
	system("pause");
}

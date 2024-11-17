#include<iostream>
#include<locale.h>




using namespace std;


int main(){
	setlocale(LC_ALL,"portuguese");
	int numero;
	
	for(numero=1; numero<11; numero++){
		cout<< "numero:"<< numero<< "\n";
	}
	
	string nome;
	int contador;
	double nota, media, soma;
	soma=0;
	cout<<"digite o nome do aluno:\n";
	cin>> nome;
	for(contador=1; contador<=4; contador ++){
		cout<<"digite uma nota"<< contador<< "\n";
		cin>>nota;
		soma+=nota;
		
	}
	media= soma/4;
	cout<< "aluno(a)"<< nome<< "\n";
	cout<< "média:"<< media<< "\n";
	
	
	
	system("pause");
	return 0;
	
}

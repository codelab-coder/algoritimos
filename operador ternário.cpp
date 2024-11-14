#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	string letra, mensagem;
	cout << "digite uma letra:\n";
	cin>> letra;
	(letra == "a")? mensagem = "você digitou a letra a" : mensagem ="você não digitou a letra A";
	cout << "letra digitada:"<< letra<<endl;
	cout << "resultado:" << mensagem << endl << endl;
	
	
	string vogal, resultado;
	cout << "digite uma letra: \n";
	cin>> vogal;
	(vogal=="a")? resultado= "vogal A" : (vogal== "e")? resultado= "vogal E": (vogal== "i")? resultado= "vogal I": (vogal== "o")? resultado= "vogal O": (vogal=="u")? resultado="vogal U": resultado= "consoante"+vogal;
	
	
	cout << "letra digitada:"<< vogal<<endl;
	cout << "resultado:" << resultado << endl << endl;
	
	string sexo;
	int preco;
	preco=10;
	cout<< "\n digite o seu sexo: \n";
	cin>> sexo;
	
	(sexo== "m")? preco ++ : preco-=3;
	
	cout << " preço a pagar: " << preco<< endl;
	cout<< "Sexo:" << sexo<< endl;
	
	
	system("pause");
}


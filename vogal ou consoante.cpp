#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	setlocale(LC_ALL , "portuguese");
	
	string vogal, resultado;
	cout << "digite uma letra: \n";
	cin>> vogal;
	(vogal=="a")? resultado= "vogal A" : (vogal== "e")? resultado= "vogal E": (vogal== "i")? resultado= "vogal I": (vogal== "o")? resultado= "vogal O": (vogal=="u")? resultado="vogal U": resultado= "consoante"+vogal;
	
	
	cout << "letra digitada:"<< vogal<<endl;
	cout << "resultado:" << resultado << endl << endl;
	system("pause");
	return 0;
}

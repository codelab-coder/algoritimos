#include <iostream>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	string nome;
	int idade;
	
	cout << "digite seu nome:\n";
	getline(cin, nome);
	
	cout << "digite sua idade:\n";
	cin >> idade;
	
	cout << "nome"<< nome << "\n";
	cout << "idade"<< idade << "\n";
	
	system ("pause");
	return 0;
}

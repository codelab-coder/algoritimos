#include <iostream>
#include <locale.h>

using namespace std;

void nome(string nome="Paulo");
void idade(int idade= 29);


int main() {
    setlocale(LC_ALL, "portuguese");
    nome();
    idade();
    
    
    
    
    
    system("pause");
    return 0;
}
void nome(string nome){
	cout<< "usuário:"<< nome;
}
void idade(int idade){
	cout<<"idade:"<<idade;
}


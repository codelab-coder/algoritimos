#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	
	
	int vetorNumeros[5];
	int contador;
	

	for ( contador = 0; contador < 5; contador++ ){
		
		cout << "Digite o n�mero da posi��o: " << contador << ": ";
		cin >> vetorNumeros[contador];
		
	}
	
	for ( contador = 4; contador >= 0; contador-- ){
		
		cout << vetorNumeros[contador] << "\n";
		
	}
			
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}

#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	
	double valorCompra, totalPagar;
	int codigo;
	
	cout << "Informe o valor total da compra: \n";
	cin >> valorCompra;
	
	cout << "Digite o c�digo: \n";
	cout << "1 - Cliente Comum (0% desconto)\n";
	cout << "2 - Funcion�rio (10% desconto)\n";
	cout << "3 - Cliente Vip (5% desconto)\n";
	cin >> codigo;
	
	//switch = Escolha
	switch(codigo){
		
		case 1:
				cout << "\nCliente comum - 0% de desconto.\n";
				cout << "Total a pagar: " << valorCompra << "\n";
			break;
			
		case 2:
				totalPagar = valorCompra - (valorCompra * 0.1);
				cout << "\Funcion�rio - 10% de desconto.\n";
				cout << "Total a pagar: " << totalPagar << "\n";
			break;
			
		case 3:
				totalPagar = valorCompra - (valorCompra * 0.05);
				cout << "\Cliente Vip - 5% de desconto.\n";
				cout << "Total a pagar: " << totalPagar << "\n";
			break;
			
		default:
				cout << "Op��o inv�lida!!!\n";
			break;
		
	}
	
	
	
	
	
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}

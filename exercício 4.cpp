#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	
	int numero, intervalo1, intervalo2, intervalo3, intervalo4, numeroForaIntervalo;
	
	intervalo1 = 0;
	intervalo2 = 0;
	intervalo3 = 0;
	intervalo4 = 0;	
	numeroForaIntervalo = 0;
	

	while ( true ){
		
		cout << "Digite um n�mero inteiro entre 0 e 40 (ou negativo para parar): \n";
		cin >> numero;
		
		if( numero < 0 ){
			
			break;
			
		}
		

		if ( numero <= 10 ){			
			intervalo1++;			
		}else if ( numero <= 20 ){			
			intervalo2++;			
		}else if ( numero <= 30 ){			
			intervalo3++;			
		}else if ( numero <= 40 ){			
			intervalo4++;			
		}else{			
			numeroForaIntervalo++;			
		}
		
	}
	
	cout << "\nDos n�meors digitados:";
	cout << "\nN�meros de [0-10]: " << intervalo1;
	cout << "\nN�meros de [11-20]: " << intervalo2;
	cout << "\nN�meros de [21-30]: " << intervalo3;
	cout << "\nN�meros de [31-40]: " << intervalo4;
	cout << "\nN�meros fora do intervalo: " << numeroForaIntervalo << "\n";
	
			
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}

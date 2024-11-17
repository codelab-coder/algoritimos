#include<iostream>
#include<locale.h>




using namespace std;


int main(){
	setlocale(LC_ALL,"portuguese");
	int numero,contador,par;
	for ( contador = 1; contador <= 10; contador++ ){
		
			cout << "Digite o número: " << contador << "\n";
			cin >> numero;
			
			if( numero % 2 == 0 ){
				
				par++;
				
			}
		
	}
	
	cout << "\nQuantidade números pares: " << par;
	cout << "\nQuantidade números impares: " << 10 - par << "\n";
	
}

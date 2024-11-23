#include <iostream> 
#include <locale.h> 


using namespace std;


void contarDeUmAteDez(int numero, int incremento=1);

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int contador;
	contador = 1;
	
	cout << " ----- Resultado com While - Enquanto -----\n";
	while ( contador < 11 ){
		
		cout << "Número While: " << contador << "\n";
		contador++;
		
	}
	
	//----------------------------------------------
	
	cout << "\n\n";
	contarDeUmAteDez(10);
			

	system("pause");
	

	return 0;
}

void contarDeUmAteDez(int numero, int incremento){
	
	cout << "Número Função: " << incremento << "\n";
	

	if( numero > incremento ){
		
		contarDeUmAteDez(numero, ++incremento);
		
	}
	
}

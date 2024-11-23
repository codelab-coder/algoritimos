#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int vetorNumeros[5];
	int vetorImpar[5];
	int contador, posicao;
	

	for ( posicao= 0; posicao < 5; posicao++ ){
		
		cout << "Digite o número da posição: " << posicao << ": ";
		cin >> vetorNumeros[posicao];
		if(vetorNumeros[posicao]%2 !=0){
			vetorImpar[contador]=vetorNumeros[posicao];
			contador++;
		}
	}
	cout<< "os numeros impares são:\n";
	for(posicao=0; posicao<contador; posicao++){
		
		cout<< vetorImpar[posicao]<<"\n";
	}
	
		
		
	
	
	
	
	
		//Impede o fechamento da tela após execução do código para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;
}

#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	int vetor[5];
	int posicao,maior,menor,igual;
	maior=0;
	menor=0;
	igual=0;
		for(posicao=0;posicao<5; posicao++){
			cout<< "digite um n�mero:"<<posicao<<":";
			cin>>vetor[posicao];
		} for(posicao=0;posicao<5; posicao++){
		if(vetor[posicao]==vetor[0]){
			igual=igual+1;
		}else if(vetor[posicao]>vetor[0]){
		maior=maior+1;
	} else if(vetor[posicao]<vetor[0]){
		menor=menor+1;
	}cout << "Maiores: " << vetor[posicao] << "\n";
		cout << "Menores: " << vetor[posicao] << "\n";
		cout << "Iguais: " << vetor[posicao + 1] << "\n";
	}
	cout << "\n\nTotal de n�meros maiores que " << vetor[0] << ": " << maior;
	cout << "\nTotal de n�meros menores que " << vetor[0] << ": " << menor;
	cout << "\nTotal de n�meros iguais a " << vetor[0] << ": " << igual << "\n";
		

	
	
			
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}




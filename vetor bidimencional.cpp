#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	string matriz[2][3];
	int linha,coluna;
     matriz[0][0]="A";
	 matriz[0][1]="B";
	 matriz[0][2]="C";
	 matriz[1][0]="D";
	 matriz[1][1]="E";
	 matriz[2][2]="F";
	
	cout<< "vetor letras \n";
	for(linha=0; linha<2; linha++){
		for(coluna=0; coluna<3; coluna++){
			cout<< matriz[linha][coluna]<<"";
		}
	}
	cout<<"\n";
	
	
	int matrizInteiros[2][3];
	int linhaInteiro, colunaInteiro;
	matrizInteiros[0][0]=1;
	matrizInteiros[0][1]=2;
	matrizInteiros[0][2]=3;
	matrizInteiros[1][0]=4;
	matrizInteiros[1][1]=5;
	matrizInteiros[2][2]=6;
	
	cout<< "vetor letras \n";
	for(linhaInteiro=0; linhaInteiro<2; linhaInteiro++){
		for(colunaInteiro=0; colunaInteiro<3; colunaInteiro++){
			cout<< matrizInteiros[linhaInteiro][colunaInteiro]<<"";
		}
	}
	cout<<"\n";
	
	int matrizAuto[50][10];
	int linhaAuto, colunaAuto;
	cout<<"imprimindo matriz automática\n";
	for(linhaAuto=0; linhaAuto<50; linhaAuto++ ){
		for(colunaAuto=0;colunaAuto<10; colunaAuto++){
		cout<<matrizAuto[linhaAuto][colunaAuto]<<"";
		}

		
	}
		
	
	
	
	
	
	
	system("pause");
	
	return 0;
}

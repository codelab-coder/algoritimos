#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int matriz[3][3];
	int  coluna, linha;
	int soma1, soma2;
	for (linha=0;linha<3; linha++){
		for (coluna=0;coluna<3; coluna++){
			cout<< "digte o numero da linha"<< linha<< "digite o número de coluna"<<coluna;
			cin>> matriz[linha][coluna];
	}
	
			
}
cout<<"valores digitados";
for (linha=0;linha<3; linha++){
		for (coluna=0;coluna<3; coluna++){
			cout<< matriz[linha][coluna];
		}
		cout<<"\n";
	}
soma1=matriz[0][0]+matriz[1][1]+matriz[2][2];
soma2= matriz[0][3]+matriz[2][2]+ matriz[3][0];
cout<< "as somas de diagonais são"<<soma1<<"\n"<<soma2;


	system("pause");
	
	return 0;
}


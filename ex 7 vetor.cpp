#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int matriz[3][3];
	int  coluna, linha;
	int maior;
	maior=0;
	for (linha=0;linha<3; linha++){
		for (coluna=0;coluna<3; coluna++){
			cout<< "digte o numero da linha"<< linha<< "digite o número de coluna"<<coluna;
			cin>> matriz[linha][coluna];
		if(matriz[linha][coluna]>5){
	maior++;
}
}
}

    for (linha=0;linha<3; linha++){
		for (coluna=0;coluna<3; coluna++){
cout<<matriz[linha][coluna];
}
cout<<"\n";
}

cout<<"ao todo tivemos"<<maior<<"números maiores que 5";

	








	system("pause");
	
	return 0;
}

			

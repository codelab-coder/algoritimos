#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int matriz[3][3];

	int  coluna, linha;
	for (linha=0;linha<3; linha++){
		for (coluna=0;coluna<3; coluna++){
			cout<< "digte o numero da linha"<< linha<< "digite o número de coluna"<<coluna;
			cin>> matriz[linha][coluna];
	}

	


	}
	for (linha=0;linha<3; linha++){
		for (coluna=0;coluna<3; coluna++){
cout<<matriz[linha][coluna];
}
cout<<"\n";
}
for (linha=0;linha<3; linha++){
		for (coluna=0;coluna<3; coluna++){
matriz[linha][coluna]= matriz[linha][coluna]*2;
cout<<matriz[linha][coluna];
}
cout<<"\n";
}








	system("pause");
	
	return 0;
}

			

#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int numeroApartamento;
	cout<< "digite o número do andar do apartamento que deseja comprar: \n";
	cin >> numeroApartamento;
	switch(numeroApartamento){
		case 1:
		case 2: 
		case 3:
			cout<< "andares de 1 ao 3- 200 reais \n\n";
			break;
		case 4:
		case 5:
		case 6:
			cout<< " andares de 4 ao 6- 400 reais\n\n";
			break;
		case 7:
		case 8:
		case 9:
			cout<< "andares de 7 ao 9- 500 reais \n\n";
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			cout<< "andares de 10 ao 18- 1000 reais \n\n";
			break;
		default:
			cout<< "opção inválida";
			break;
		
		
	}
	
	
	
	
	system("pause");
	return 0;
	 
}

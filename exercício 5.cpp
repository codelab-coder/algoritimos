#include <iostream>
#include <locale.h>


using namespace std;
int main(){
	 setlocale(LC_ALL, "portuguese");
     int eleitores,candidato1,candidato2,candidato3,nulos,contador,voto;
	 candidato1= 0;
	 candidato2=0;
	 candidato3=0;
	 nulos=0;
	 cout<<"digite o n�mero de eleitores\n";
	 cin>> eleitores;
	for(contador=1; contador<=eleitores; contador++){
		cout<< "escolha paulo com o n�mero 1\n";
		cout<< "escolha jo�o com o n�mero 2\n";
		cout<< "escolha carlos com o n�mero 3\n";
		cin>> voto;
		if (voto==1){
			candidato1++;
			
			
		}else if(voto==2){
			candidato2++;
		}else if(voto==3){
			candidato3++;
		}else
		nulos++;
	}
		
	cout<< "resultado da elei��o";
	cout<< "paulo"<<candidato1<<"votos\n";
	cout<< "jo�o"<<candidato2<<"votos\n";
	cout<< "carlos"<<candidato3<<"votos\n";
	cout<< "nulos"<< nulos<<"votos\n";
	system ("pause");
	return 0;
}
	
	 



	
	
	
		
	

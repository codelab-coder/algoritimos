#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	setlocale(LC_ALL , "portuguese");
	
	int numero;
	cout<< "digite um n�mero inteiro:"<<endl;
	cin>>numero;
	if(numero>0){
		cout<<"este n�mero"<< numero<<"� positivo"<< endl;
	}if(numero<0){
		cout<< "este n�mero"<< numero << "� negativo << endl";
	}else{
		cout<<"\n numero 0 \n";
	}
	
	system("pause");
	return 0;
	
}

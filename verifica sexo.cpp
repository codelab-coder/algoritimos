#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	setlocale(LC_ALL , "portuguese");
	
	string sexo;
	cout << "digite m para masculino e f para feminino";
	cin>>sexo;
	if(sexo=="m"){
		cout<< "seu sexo � masculino" << endl;
	}else if(sexo=="f"){
		cout<< "seu sexo � feminino "<< endl;
	}else{
		cout<< "\n sexo inv�lido\n";
	}
	system("pause");
	return 0;
}

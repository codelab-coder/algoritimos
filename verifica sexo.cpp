#include<iostream>
#include<locale.h>


using namespace std;

int main(){
	setlocale(LC_ALL , "portuguese");
	
	string sexo;
	cout << "digite m para masculino e f para feminino";
	cin>>sexo;
	if(sexo=="m"){
		cout<< "seu sexo é masculino" << endl;
	}else if(sexo=="f"){
		cout<< "seu sexo é feminino "<< endl;
	}else{
		cout<< "\n sexo inválido\n";
	}
	system("pause");
	return 0;
}

#include <iostream>
#include <locale.h>


using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	
	
	int contador, fatorial, numero;
	fatorial=1;
	
	cout<<"digite o n�mero o qual deseja saber seu fatorial\n";
	cin>> numero;
	for(contador=numero; contador>=1; contador--){
		fatorial*= contador;
		cout<<"o fatorial do numero:"<<numero<<"�"<<fatorial<<"\n";
	}
		system ("pause");
	return 0;
}

#include <iostream>
#include <locale.h>


using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	
	
	int numero1,numero2,contador;
	
	cout<<"digite o primeiro valor\n";
	cin>> numero1;
	cout<< "digite o segundo valor\n";
	cin>>numero2;
	contador==1;
	for(contador= numero1; contador<= numero2; contador++){

		cout<<contador<<"\n";
	}
	system ("pause");
	return 0;
}

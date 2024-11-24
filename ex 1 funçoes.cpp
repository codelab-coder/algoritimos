#include <iostream>
#include <locale.h>

using namespace std;
int verificarn(int numero1,int numero2);

int main() {
    setlocale(LC_ALL, "portuguese");
    int numero1,numero2,resultado;
    cout<<"digite o primeiro valor";
    cin>>numero1;
    cout<<"digite o segundo valor";
    cin>>numero2;
    resultado= verificarn( numero1,  numero2);
cout<< "o menor número é"<<resultado; 
    
    system("pause");
    return 0;
}
int verificarn( int numero1,int numero2){
	if(numero1<numero2){
		return numero1;
	}else{
		return numero2;
	}
}



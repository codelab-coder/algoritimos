#include <iostream>
#include<locale.h>

using namespace std;


int main(){
	setlocale(LC_ALL,"");
	int numerosInteiros = 3;
	double numerosComCasasDecimais=9.99;
	char letra= 'a';
	const char* letras= "abcdef";
	string textos= "aluno fernando";
	bool verdadeiroFalso= false;
	
	cout<< numerosInteiros << "\n";
	cout<< numerosComCasasDecimais << "\n";
	cout<< letra << "\n";
	cout<< textos << "\n";
	cout<< verdadeiroFalso << "\n";
	cout << letras << "\n";
}

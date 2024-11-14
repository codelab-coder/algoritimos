#include <iostream>
#include<locale.h>




using namespace std;


int main(){
	setlocale(LC_ALL, "portuguese");
	
	
	int contador;
	contador= 1;
	while(contador<=10){
		cout<< "numero:"<< contador<<"\n";
		contador ++;
	}
	
	system("pause");
	return 0;
}

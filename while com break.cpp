#include <iostream>
#include<locale.h>




using namespace std;


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int contador;
	contador=1;
	
	while(contador<100){
		cout<< "numero:"<< contador<< "\n";
		if(contador==5){
			break;
		}
		contador ++;
	}
	
	
	
	system("pause");
	return 0;
}

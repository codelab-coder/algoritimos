#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	setlocale(LC_ALL,"portuguese");
	string pais;
	recomecar:
	cout << "qual pa�s vai ganhar a copa do mundo?\n";
	cin>> pais;
	if(pais=="Brasil"){
		cout<<"O Brasil ser� o pa�s campe�o da copa do mundo, at� breve \n";
	}else if(pais=="BRASIL"){
	    cout<<"O Brasil ser� o pa�s campe�o da copa do mundo, at� breve \n";
	}else if(pais =="brasil"){
			cout<<"O Brasil ser� o pa�s campe�o da copa do mundo, at� breve \n";
	}else{
		cout << "\n";
		goto recomecar;
	}
	system ("pause");
	return 0;
	
}

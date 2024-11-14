#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	setlocale(LC_ALL,"portuguese");
	string pais;
	recomecar:
	cout << "qual país vai ganhar a copa do mundo?\n";
	cin>> pais;
	if(pais=="Brasil"){
		cout<<"O Brasil será o país campeão da copa do mundo, até breve \n";
	}else if(pais=="BRASIL"){
	    cout<<"O Brasil será o país campeão da copa do mundo, até breve \n";
	}else if(pais =="brasil"){
			cout<<"O Brasil será o país campeão da copa do mundo, até breve \n";
	}else{
		cout << "\n";
		goto recomecar;
	}
	system ("pause");
	return 0;
	
}

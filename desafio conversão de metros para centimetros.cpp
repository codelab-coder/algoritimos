#include <iostream>
#include <locale.h>

using namespace std ;

int  main() {
	setlocale(LC_ALL, "portuguese");
	int metro, centimetro;
	cout << "digite o número em metros para ser convertido:\n";
	cin>> metro;
	centimetro= metro*100;
	cout << "o valor convertido de metros para centímetros é:\n"<< centimetro;
	system("pause");
	return 0;
	
}

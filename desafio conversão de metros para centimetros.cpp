#include <iostream>
#include <locale.h>

using namespace std ;

int  main() {
	setlocale(LC_ALL, "portuguese");
	int metro, centimetro;
	cout << "digite o n�mero em metros para ser convertido:\n";
	cin>> metro;
	centimetro= metro*100;
	cout << "o valor convertido de metros para cent�metros �:\n"<< centimetro;
	system("pause");
	return 0;
	
}

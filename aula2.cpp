#include <iostream>
#include <locale.h>

using namespace std;



void soma(int numero1, int numero2);
void soma(int numero1, int numero2, int numero3);

int main() {
    setlocale(LC_ALL, "portuguese");
    soma(10, 5);
    soma(3,30,300);
    
    
    
    
    
    system("pause");
    return 0;
}
void soma(int numero1, int numero2){
cout<<"total"<< numero1+numero2;
}
void soma(int numero1, int numero2, int numero3){
	cout<<"total2"<< numero1 + numero2+numero3;
}

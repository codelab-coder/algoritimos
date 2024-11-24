#include <iostream>
#include <locale.h>

using namespace std;
void nomecompleto(string nome,string sobrenome);




int main() {
    setlocale(LC_ALL, "portuguese");
    string nome, sobrenome, completo;
    cout<<"digite o seu nome";
    cin>>nome;
    cout<<"digite o seu sobrenome";
    cin>>sobrenome;
nomecompleto(nome, sobrenome);

    
    
        
    system("pause");
    return 0;
}
void nomecompleto(string nome,string sobrenome){
cout<< "seu nome completo é"<<nome+sobrenome;
}

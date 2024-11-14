algoritmo "Exercício Função Idade para Votar e tirar a Carteira de Habilitação"
// Função :
// Autor :Fernando Marques Guimarães
// Data : 13/07/2024
// Seção de Declarações 
var
    nascimento: inteiro
    idade:inteiro
    
inicio

      Escreval("digite o ano de seu nasimento")
      leia(nascimento)
      idade<- 2024-nascimento
      se(idade>=16) e (idade>=18) entao
      Escreval("você tem:", idade,"então pode votar e tirar carteria de habilitação")
      senao
           se(idade>=16) e (idade<=18)entao
           escreval("você tem:", idade, "então pode votar mas não pode tirar carteria de habilitação")
           senao
                se (idade<16) e (idade<18) entao
                Escreval("você tem:", idade, "então você não pode votar e não pode tirar carteria de habilitação")
                fimse
           fimse
      fimse
                
      
fimalgoritmo

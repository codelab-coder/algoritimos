algoritmo "escolha menu"
// Função :
// Autor :
// Data : 14/07/2024
// Seção de Declarações 
var
   n1: real
   n2: real
   operacao:inteiro
   resultado: real
   


inicio


      Escreval("digite 1 para soma, 2 para subtração, 3 para multiplicação e 4 divisão")
      leia(operacao)
      escolha operacao
              caso 1
              Escreval("você escolheu soma")
              Escreval("digite um número")
              leia(n1)
              Escreval("digite outro número")
              leia(n2)
              resultado <- n1+n2
              Escreval("seu resultado é",resultado)
              caso 2
              Escreval("você escolheu subtração")
              Escreval("digite um número")
              leia(n1)
              Escreval("digite outro número")
              leia(n2)
              resultado <- n1-n2
              Escreval("seu resultado é", resultado)
              caso 3
              Escreval("você escolheu multiplicação")
              Escreval("digite um número")
              leia(n1)
              Escreval("digite outro número")
              leia(n2)
              resultado <- n1*n2
              Escreval("seu resultado é", resultado)
              caso 4
              Escreval("você escolheu divisão")
              Escreval("digite um número")
              leia(n1)
              Escreval("digite outro número")
              leia(n2)
              resultado <- n1/n2
              Escreval("seu resultado é", resultado)
              outrocaso
              Escreval("valor inválido")
      fimescolha
fimalgoritmo

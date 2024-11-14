algoritmo "vetor pesquisa"
// Função :
// Autor :
// Data : 22/07/2024
// Seção de Declarações 
var

   numero: vetor[1..5] de inteiro
   indice: inteiro
   numeroP:inteiro

inicio
      para indice de 1 ate 5 faca
           Escreval("digite um número", indice)
           leia(numero[indice])
      fimpara
      Escreval ("digite um número para pesquisar")
      leia(numeroP)
      indice <-1
      enquanto (indice<5) e (numero[indice] <> numeroP) faca
      indice <- indice+1
      fimenquanto
      se (numero[indice] = numeroP) entao
         Escreval("número encontrado em:", indice)
      senao
           Escreval("número não encontrado")
      fimse
      
      
fimalgoritmo

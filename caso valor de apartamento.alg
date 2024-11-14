algoritmo "caso valor de apartamento"
// Função :
// Autor :
// Data : 14/07/2024
// Seção de Declarações 
var

   andar:inteiro
   preco: inteiro
   

inicio

      Escreval("digite o andar")
      leia(andar)
      
      escolha andar
              caso 1
              preco<-200
                    Escreval("para morar no andar",andar,"è necessário de",preco,"reais")
              caso 2,3,4
              preco <-220
                    Escreval("para morar no andar",andar,"è necessário de",preco,"reais")
              caso 5,6,7
              preco <- 250
                    Escreval("para morar no andar",andar,"è necessário de",preco,"reais")
              caso 8,9,10
              preco <- 300
                    Escreval("para morar no andar",andar,"è necessário de",preco,"reais")
              caso 11,12,13,14,15,16,17,18
                   preco<-500
                    Escreval("para morar no andar",andar,"è necessário de",preco,"reais")
              outrocaso
              Escreval("Não existe este andar")
      fimescolha




fimalgoritmo

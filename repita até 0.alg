algoritmo "repita at� 0"
// Fun��o :
// Autor :
// Data : 20/07/2024
// Se��o de Declara��es 
var

   numero: real
   maior: real

inicio

      maior<-0
      
      repita
            Escreval("digte um n�mero:")
            leia(numero)
            se( numero > maior) entao
                maior <- numero
            fimse
      ate numero=0
      Escreval("o numero maior �:",maior)

      
fimalgoritmo

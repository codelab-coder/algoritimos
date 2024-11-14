algoritmo "repita até 0"
// Função :
// Autor :
// Data : 20/07/2024
// Seção de Declarações 
var

   numero: real
   maior: real

inicio

      maior<-0
      
      repita
            Escreval("digte um número:")
            leia(numero)
            se( numero > maior) entao
                maior <- numero
            fimse
      ate numero=0
      Escreval("o numero maior é:",maior)

      
fimalgoritmo
